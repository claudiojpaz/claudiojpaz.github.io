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

function transformerLineHighlight() {
  return {
    name: 'transformer-line-highlight',
    line(node: any) {
      const lineText = node.children
        .map((c: any) => c.children?.[0]?.value ?? c.value ?? '')
        .join('')

      const match = lineText.match(/\/\/\s*\[!code line-highlight\]/)
      if (!match) return

      // Eliminar el comentario del código renderizado
      node.children = node.children.filter((child: any) => {
        const text = child.children?.[0]?.value ?? child.value ?? ''
        return !text.includes('[!code line-highlight') && text.trim() !== '//'
      })

      // Highlight de toda la línea
      for (const child of node.children) {
        if (!child.properties) child.properties = {}

        const cls = child.properties.class || ''
        child.properties.class = (cls + ' highlighted-word').trim()
      }
    },
  }
}

function transformerCharHighlight() {
  return {
    name: 'transformer-char-highlight',

    line(node: any) {
      const getText = (child: any) =>
        child.children?.map((c: any) => c.value ?? '').join('')
        ?? child.value
        ?? ''

      const marker = /\[!code char:(\d+)\]/
      const lineText = node.children.map(getText).join('')
      const match = lineText.match(marker)

      if (!match) return

      // Posición absoluta, contando desde la columna 1.
      const column = Number(match[1]) - 1

      // Quitar únicamente la anotación, conservando el resto.
      let remaining = lineText.replace(marker, '')

      // Reconstruir los tokens para localizar el carácter exacto.
      const children: any[] = []
      let offset = 0

      for (const child of node.children) {
        const original = getText(child)
        const cleaned = original.replace(marker, '')

        if (!cleaned) continue

        const start = offset
        const end = start + cleaned.length
        offset = end

        const makeNode = (value: string, highlighted = false) => {
          const copy = structuredClone(child)
          copy.children = [{ type: 'text', value }]

          if (highlighted) {
            copy.properties ??= {}
            const cls = copy.properties.class || ''
            copy.properties.class =
              (cls + ' highlighted-char').trim()
          }

          return copy
        }

        if (column >= start && column < end) {
          const index = column - start

          if (index > 0)
            children.push(makeNode(cleaned.slice(0, index)))

          children.push(makeNode(cleaned[index], true))

          if (index + 1 < cleaned.length)
            children.push(makeNode(cleaned.slice(index + 1)))
        } else {
          children.push(makeNode(cleaned))
        }
      }

      node.children = children
    },
  }
}

export default defineShikiSetup(() => ({
  transformers: [
    transformerNotationWordHighlight(),
    transformerRangeHighlight(),
    transformerWordOnce(),
    transformerLineHighlight(),
    transformerCharHighlight(),
  ],
}))



