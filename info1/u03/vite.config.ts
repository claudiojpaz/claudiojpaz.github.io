import { defineConfig } from 'vite'
import MarkdownItAttrs from 'markdown-it-attrs'

export default defineConfig({
  slidev: {
    markdown: {
      markdownItSetup(md) {
        // Registra el plugin aquí
        md.use(MarkdownItAttrs, {
          // Opciones opcionales del plugin
          leftDelimiter: '{',
          rightDelimiter: '}',
          allowedAttributes: [] // Vacío permite todos
        })
      },
    },
  },
})
