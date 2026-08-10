import { defineShikiSetup } from '@slidev/types'
import { transformerNotationWordHighlight } from '@shikijs/transformers'

function transformerWordOnce() {
  return {
    name: 'transformer-word-once',
    line(node: any) {
      const lineText = node.children
        .map((c: any) => c.children?.[0]?.value ?? c.value ?? '')
        .join('')

      const match = lineText.match(/\/\/\s*\[!code word-once:(.+?)\]/)
      if (!match) return

      const target = match[1].trim()
      let found = false

      // Eliminar el nodo que contiene el comentario
      node.children = node.children.filter((child: any) => {
        const text = child.children?.[0]?.value ?? child.value ?? ''
        return !text.includes('[!code word-once:')
      })

      // También limpiar el espacio/comentario anterior ("//")
      node.children = node.children.filter((child: any) => {
        const text = child.children?.[0]?.value ?? child.value ?? ''
        return text.trim() !== '//'
      })

      for (const child of node.children) {
        const text = child.children?.[0]?.value ?? child.value ?? ''
        if (!found && text.includes(target)) {
          if (!child.properties) child.properties = {}
          const cls = child.properties.class || ''
          child.properties.class = (cls + ' highlighted-word').trim()
          found = true
        }
      }
    },
  }
}

function transformerRangeHighlight() {
  return {
    name: 'transformer-range-highlight',
    line(node: any) {
      const lineText = node.children
        .map((c: any) => c.children?.[0]?.value ?? c.value ?? '')
        .join('')

      const match = lineText.match(/\/\/\s*\[!code range:(.+?)\]/)
      if (!match) return

      const target = match[1].trim()

      // Eliminar nodos del comentario
      node.children = node.children.filter((child: any) => {
        const text = child.children?.[0]?.value ?? child.value ?? ''
        return !text.includes('[!code range:') && text.trim() !== '//'
      })

      let fullText = ''
      const spans: any[] = []
      for (const child of node.children) {
        const text = child.children?.[0]?.value ?? child.value ?? ''
        spans.push({ node: child, text, start: fullText.length })
        fullText += text
      }

      const idx = fullText.indexOf(target)
      if (idx === -1) return
      const end = idx + target.length

      for (const span of spans) {
        const spanEnd = span.start + span.text.length
        if (spanEnd > idx && span.start < end) {
          if (!span.node.properties) span.node.properties = {}
          const cls = span.node.properties.class || ''
          span.node.properties.class = (cls + ' highlighted-word').trim()
        }
      }
    },
  }
}

export default defineShikiSetup(() => ({
  transformers: [
    transformerNotationWordHighlight(),
    transformerRangeHighlight(),
    transformerWordOnce(),
  ],
}))

