<script setup>
defineProps({
  n: String,
})
</script>

<template>
  <sup
    class="text-xs text-gray-400 cursor-pointer align-super"
    :title="$slots.default?.()[0]?.children"
  >
    [{{ n }}]
  </sup>
</template>

