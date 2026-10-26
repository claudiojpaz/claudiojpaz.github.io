<script setup>
import { ref } from 'vue'

const open = ref(false)

defineProps({
  title: {
    type: String,
    default: "Para probar en linux"
  }
})
</script>

<template>
  <!-- Icono -->
   <img
    src="/img/prompt.png"
    class="absolute top-6 right-8 w-16 h-16 cursor-pointer hover:scale-140 transition"
    @click="open = true"
  />

   <!--
  <div
    class="absolute top-6 right-8 cursor-pointer text-yellow-400 text-2xl"
    @click="open = true"
  >
    ⚠
  </div>
   -->

  <!-- Overlay -->
  <div
    v-if="open"
    class="fixed inset-0 bg-black/60 backdrop-blur-sm flex items-center justify-center z-50"
    @click.self="open = false"
  >
    <div class="bg-gray-900 text-white w-3/4 max-w-4xl p-10 rounded-2xl shadow-2xl relative">

      <div class="flex justify-between items-center mb-6">
        <h2 class="text-2xl font-bold text-yellow-400">
          {{ title }}
        </h2>
        <button
          class="text-gray-400 hover:text-white text-xl"
          @click="open = false"
        >
          ✕
        </button>
      </div>

      <div class="text-lg leading-relaxed">
        <slot />
      </div>

    </div>
  </div>
</template>

