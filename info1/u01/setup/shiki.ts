import { defineShikiSetup } from '@slidev/types'
import customLanguage from './customLanguage.tmLanguage.json'
import customTheme from './customTheme.tmTheme.json'

export default defineShikiSetup(() => {
  return {
    themes: {
      dark: 'everforest-dark',
      light: 'everforest-light',
    },
    langs: [
      'c',
      'bash',
      // ...
    ],
    transformers: [
      // ...
    ],
  }
})
