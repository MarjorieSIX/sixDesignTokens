![NPM](https://img.shields.io/npm/v/six-design-tokens.svg?color=forest&style=for-the-badge)
# SIX - Design Tokens


Design Tokens, variables permettant une source unique à tous les projets Desjardins.
```bash
style-dictionary build
```

Vous devriez voir quelque chose comme cela:
```
Reading config file from ./config.json
Building all platforms

scss
✔︎ build/scss/_token-variables.scss

sketch
✔︎ ./build/Sketch/TokenVariables.sketchpalette

```

Le build css a été commenté car il utilise les CSS variables qui ne sont pas compatibles avec IE11. 
Le build des plateformes android et ios ont été commentées pour le moment, le script génère seulement les couleurs.

Vous devriez avoir un dossier build ressemblant à:

```
├── scss/
│   ├── _token-variables.scss
├── sketch/
│   ├── TokenVariables.sketchpalette
```

Petit exemple de ce à quoi le fichier .scss ressemble:

**SCSS**
```scss
// variables.scss
$color-black: #000000;
$color-blue-light: #3f42db;
$color-blue-medium: #161c71;
$color-blue-dark: #e2dff2;
$ds-bp-xs: 320 !default;
$ds-bp-sm: 768 !default;
$ds-bp-md: 992 !default;
$ds-bp-lg: 1200 !default;
$ds-bp-xl: 1440 !default;
```
Toutes les variables commencent par ds- sauf les variables de couleurs.
Nous avons des variables pour:
- les couleurs,
- la police de caractères,
- les breakpoints,
- les ombrages,
- les tailles (icônes, padding, margin, bordures)
