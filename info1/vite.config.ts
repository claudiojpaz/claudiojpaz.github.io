import { defineConfig } from 'vite'
import { slidevPlugin } from '@slidev/cli'

export default defineConfig({
  plugins: [slidevPlugin()],
  build: {
    rollupOptions: {
      input: {
        main: 'slides.md',
        u01: 'u01/slides.md',
        u02: 'u02/slides.md',
      },
    },
  },
})
