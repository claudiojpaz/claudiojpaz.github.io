<script setup>
import { ref, watch, onUnmounted, computed } from 'vue'

const props = defineProps({
  prompt: { type: String, default: '$ ' },
  code: { type: String, default: '' }, 
  speed: { type: Number, default: 1},
  delay: { type: Number, default: 1 },
  active: { type: Boolean, default: false }
})

const rawText = ref('')
let timeoutId = null

// Esta función computada busca el texto del prompt y lo envuelve en un span con color
const formattedHTML = computed(() => {
  // Escapamos el prompt para usarlo en RegExp y reemplazamos por el span con clase
  const escapedPrompt = props.prompt.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
  const regex = new RegExp(escapedPrompt, 'g');
  return rawText.value.replace(regex, `<span class="prompt-style">${props.prompt}</span>`);
})

const typeWriter = async (text) => {
  const lines = text.split('\n')
  
  for (let n = 0; n < lines.length; n++) {
    let line = lines[n]
    
    // CASO A: Salida del sistema (empieza con >)
    if (line.startsWith('>')) {
      const output = line.substring(1)
      rawText.value += (n > 0 ? '\n' : '') + output
    } 
    // CASO B: Comando del usuario
    else {
      // Agregamos el prompt manualmente al string
      rawText.value += (n > 0 ? '\n' : '') + props.prompt
      
      for (let char of line) {
        rawText.value += char
        await new Promise(resolve => {
          timeoutId = setTimeout(resolve, props.speed)
        })
      }
    }
  }
}

watch(() => props.active, (isNowActive) => {
  clearTimeout(timeoutId)
  rawText.value = ''
  if (isNowActive) {
    timeoutId = setTimeout(() => typeWriter(props.code), props.delay)
  }
}, { immediate: true })

onUnmounted(() => clearTimeout(timeoutId))
</script>

<template>
  <div class="terminal-window border border-main border-opacity-10">
    <div class="terminal-header bg-main bg-opacity-10">
      <span class="dot red"></span><span class="dot yellow"></span><span class="dot green"></span>
    </div>
    <div class="terminal-body bg-main bg-opacity-5">
      <pre><code v-html="formattedHTML"></code><span class="cursor">|</span></pre>
    </div>
  </div>
</template>

<style scoped>
.terminal-window {
  background: #1e1e1e;
  border-radius: 8px;
  font-family: 'Fira Code', monospace;
  margin: 1rem 0;
  overflow: hidden;
}
.terminal-header { padding: 8px 12px; display: flex; gap: 6px; }
.dot { width: 10px; height: 10px; border-radius: 50%; }
.red { background: #ff5f56; } .yellow { background: #ffbd2e; } .green { background: #27c93f; }
.terminal-body { padding: 15px; color: #f8f8f2; text-align: left; }
pre { margin: 0; white-space: pre-wrap; word-wrap: break-word; }

/* Esta clase ahora sí se aplicará a todos los prompts */
:deep(.prompt-style) {
  color: #4ade80 !important;
  font-weight: bold;
}

.cursor { color: #27c93f; animation: blink 1s infinite; }
@keyframes blink { 50% { opacity: 0; } }
</style>
