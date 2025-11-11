<script setup>
import { ref } from 'vue'

const props = defineProps({
  text: { type: String, required: true },
  icon: { type: String, default: 'https://api.iconify.design/noto-v1:warning.svg' },
})

const show = ref(false)
</script>

<template>
  <div class="abs-br m-6 text-xl">
    <button @click="show = true" class="slidev-icon-btn focus:outline-none">
      <img :src="icon" class="w-8 h-8" />
    </button>

    <transition name="fade">
      <div
        v-if="show"
        class="fixed inset-0 bg-black/50 flex items-center justify-center z-50"
        @click.self="show = false"
      >
        <div
          class="bg-white dark:bg-gray-800 text-gray-800 dark:text-white rounded-2xl p-6 mx-4 max-w-sm shadow-2xl text-center"
        >
          <div class="text-4xl mb-3"></div>
          <p class="text-base leading-snug whitespace-pre-wrap">
            {{ text }}
          </p>
          <button
            @click="show = false"
            class="mt-4 px-4 py-2 bg-yellow-500 text-white rounded-lg hover:bg-yellow-600 transition"
          >
            Cerrar
          </button>
        </div>
      </div>
    </transition>
  </div>
</template>

<style scoped>
.fade-enter-active,
.fade-leave-active {
  transition: opacity 0.2s ease;
}
.fade-enter-from,
.fade-leave-to {
  opacity: 0;
}
</style>

