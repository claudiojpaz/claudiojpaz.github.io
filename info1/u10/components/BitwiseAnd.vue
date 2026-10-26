
<script setup>
import { computed } from 'vue'
import { useNav } from '@slidev/client'

const { clicks } = useNav()

const a = 77
const b = 42

const bitsA = Array.from({ length: 8 }, (_, i) => (a >> (7 - i)) & 1)
const bitsB = Array.from({ length: 8 }, (_, i) => (b >> (7 - i)) & 1)
const bitsR = bitsA.map((bit, i) => bit & bitsB[i])

// El primer clic resalta el bit 0 (columna derecha).
const activeIndex = computed(() => {
  const n = clicks.value
  return n >= 1 && n <= 8 ? 8 - n : -1
})

const bitPosition = computed(() => 7 - activeIndex.value)

const calculation = computed(() => {
  const i = activeIndex.value
  if (i < 0) return 'Avanzá para analizar cada bit.'
  return `${bitsA[i]} AND ${bitsB[i]} = ${bitsR[i]}`
})
</script>

<template>
  <div class="bitwise">
    <div class="code">
      <div class="caption">C</div>
      <pre><code>char a = 77;
char b = 42;

char c = a &amp; b;</code></pre>
    </div>

    <div class="binary">
      <div class="caption">OPERACIÓN BIT A BIT</div>

      <div class="bits">
        <div class="label"></div>
        <div
          v-for="i in 8"
          :key="i"
          class="bit"
          :class="{ active: 8 - i === activeIndex }"
        >
          {{ 8 - i }}
        </div>
      </div>

      <div v-for="(bits, name) in {
        a: bitsA,
        b: bitsB,
        c: bitsR
      }" :key="name" class="bits">
        <div class="label">{{ name }}</div>
        <div
          v-for="(bit, i) in bits"
          :key="i"
          class="bit"
          :class="{
            active: i === activeIndex,
            result: name === 'c'
          }"
        >
          {{ bit }}
        </div>
      </div>

      <div class="calculation">
        <span>Bit {{ bitPosition }}</span>
        <strong>{{ calculation }}</strong>
      </div>
    </div>
  </div>
</template>

<style scoped>
.bitwise {
  display: grid;
  grid-template-columns: 1fr 1.4fr;
  gap: 1.5rem;
  align-items: start;
}

.caption {
  font-size: 0.7rem;
  opacity: 0.65;
  margin-bottom: 1rem;
  letter-spacing: 0.08em;
}

.code pre {
  padding: 1rem;
  border-radius: 0.5rem;
  background: var(--slidev-code-background);
  font-size: 0.95rem;
}

.bits {
  display: grid;
  grid-template-columns: 1.5rem repeat(8, minmax(0, 1fr));
  gap: 0.2rem;
  margin-bottom: 0.35rem;
}

.label {
  display: flex;
  align-items: center;
  font-weight: 600;
}

.bit {
  display: flex;
  justify-content: center;
  align-items: center;
  padding: 0.45rem 0;
  border-radius: 0.25rem;
  background: var(--slidev-code-background);
  font-family: var(--slidev-code-font-family);
  transition: background 150ms ease;
}

.bit.active {
  background: #b9e4ca;
  color: #14532d;
  outline: 2px solid #27834e;
}

.bit.result {
  margin-top: 0.1rem;
}

.calculation {
  margin-top: 1.2rem;
  padding: 0.75rem;
  border: 1px solid var(--slidev-theme-primary);
  border-radius: 0.5rem;
  display: flex;
  justify-content: space-between;
  gap: 0.5rem;
  flex-wrap: wrap;
}

@media (max-width: 600px) {
  .bitwise {
    grid-template-columns: 1fr;
  }
}
</style>

