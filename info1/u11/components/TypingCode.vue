<script setup>
import { ref, watch, inject, onUnmounted } from 'vue'

const props = defineProps({
  code: { type: String, default: '' },
  lang: { type: String, default: 'c' },
  speed: { type: Number, default: 40 },
  delay: { type: Number, default: 1000 },
})

// Accedemos al estado de la diapositiva actual de Slidev
const slideContext = inject('slidev-slide-context', ref({ isCurrent: false }))

const displayedText = ref('')
let i = 0
let timeoutId = null

const type = () => {
  if (i < props.code.length) {
    displayedText.value += props.code.charAt(i)
    i++
    timeoutId = setTimeout(type, props.speed)
  }
}

// ESTE ES EL DISPARADOR: 
// Se ejecuta cada vez que 'isCurrent' cambia (al entrar o salir de la diapo)
watch(() => slideContext.value?.isCurrent, (isNowActive) => {
  // 1. Limpiamos cualquier proceso anterior
  clearTimeout(timeoutId)
  
  if (isNowActive) {
    // 2. Si entramos a la diapo, reseteamos y disparamos con el delay
    displayedText.value = ''
    i = 0
    timeoutId = setTimeout(type, props.delay)
  } else {
    // 3. Si salimos, limpiamos para que esté listo la próxima vez
    displayedText.value = ''
    i = 0
  }
}, { immediate: true })

onUnmounted(() => clearTimeout(timeoutId))
</script>

<template>
  <div class="terminal-window border border-main border-opacity-10">
    <div class="terminal-header bg-main bg-opacity-10">
      <div class="flex gap-1.5">
        <span class="dot red"></span>
        <span class="dot yellow"></span>
        <span class="dot green"></span>
      </div>
      <span class="ml-4 text-xs font-mono opacity-40 uppercase">{{ lang }}</span>
    </div>
    <div class="terminal-body bg-main bg-opacity-5">
      <div class="code-wrapper">
        <shiki :code="displayedText" :lang="lang" />
        <span v-if="slideContext?.isCurrent" class="cursor"></span>
      </div>
    </div>
  </div>
</template>

<style scoped>
.terminal-window {
  border-radius: 10px;
  margin: 1.5rem 0;
  overflow: hidden;
  box-shadow: 0 8px 20px rgba(0,0,0,0.2);
}
.terminal-header {
  padding: 10px 16px;
  display: flex;
  align-items: center;
}
.dot { width: 11px; height: 11px; border-radius: 50%; }
.red { background: #ff5f56; }
.yellow { background: #ffbd2e; }
.green { background: #27c93f; }

.terminal-body {
  padding: 1.2rem;
  font-family: var(--slidev-code-font-family);
  position: relative;
}

.code-wrapper {
  display: flex;
  align-items: flex-start;
}

/* Forzamos a Shiki a no tener fondos ni márgenes propios */
:deep(.shiki) {
  margin: 0 !important;
  background: transparent !important;
  padding: 0 !important;
  white-space: pre-wrap;
  word-break: break-all;
}

.cursor {
  display: inline-block;
  width: 8px;
  height: 1.2em;
  background: var(--slidev-theme-primary, #4ade80);
  margin-left: 2px;
  animation: blink 0.8s infinite;
  vertical-align: middle;
}

@keyframes blink { 0%, 100% { opacity: 1; } 50% { opacity: 0; } }
</style>
