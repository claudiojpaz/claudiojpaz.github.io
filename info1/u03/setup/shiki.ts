// setup/shiki.ts
import { defineShikiSetup } from '@slidev/types'

export default defineShikiSetup(() => {
  return {
    theme: {
      dark: 'one-dark-pro',
      light: 'github-light',
    },
    langs: ['c', 'cpp', 'bash'],
  }
})
