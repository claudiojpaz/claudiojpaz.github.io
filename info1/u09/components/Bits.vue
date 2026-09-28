<script setup lang="ts">
const props = defineProps<{ value: string }>()
const bits = props.value.split('')
</script>

<template>
  \begin{array}{|c|c|c|c|c|c|c|c|}
  \hline
  <template v-for="(bit, i) in bits" :key="i">
    \texttt{ {{ bit }} }
    <template v-if="i !== bits.length - 1"> & </template>
  </template>
  \\
  \hline
  \end{array}
</template>
