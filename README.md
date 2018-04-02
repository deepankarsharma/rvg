# Roadmap

- [x] windows (basic panes, no operations)
- [x] widget sizing options, Window::create auto sizing
  - [ ] auto sizing on construction
- [x] row layouts
- [x] slider
- [x] vgv: rounded rect
- [ ] more advanced textfield
  - [x] scrolling, clipping
  - [ ] enter/escape
  - [x] selection
  - [ ] some basic shortcuts like ctrl-a
- [ ] fix widget resizing todos
- [ ] vgv: sanity checking (with asserts/logs)
  - [x] color functions, conversion
  - [x] shape drawing functions
- [ ] vgv: antialiasing
- [ ] vgv: reorganize/split header/sources
  - [ ] shapes/context/texture/transform/scissor headers
  - [ ] also make nk/font.h public header (sure? probably not good idea)
  - [x] separate path.hpp in separate library/utility
- [ ] advanced widget sizing hints, min/max size (?)
- [ ] split vgv and gui library
- [ ] clipboard support (probably over Gui/GuiListener)
- [ ] don't use that much paints and descriptors for widgets
  -> advanced styling/themes
- [ ] widget styles, also spacings/paddings/margins/borders etc
- [ ] popups (needed for dropdown menu, tooltip)
- [ ] z widget ordering
- [ ] dropdown menu
- [ ] tooltip
- [ ] tabs
- [ ] better mouse/keyboard grabs
- [x] think about dynamic scissor, avoiding rerecording on Widget::bounds
- [ ] benchmark alternative pipelines, optimize default use cases
  - [ ] performance optimizations, resolve performance todos
  - [ ] vgv: better with more (but also more optimized) pipelines?
- [ ] beautiful demos with screenshots
- [ ] multistop gradients (?), using small 1d textures
  - [ ] see discussion https://github.com/memononen/nanovg/pull/430
- [ ] release public version
- [ ] vgv: more stroke settings: linecap/linejoin
- [ ] animations
- [ ] textfields/slider combos for ints/floats
- [ ] better,easier custom navigation (e.g. tab-based)
- [ ] custom grabbing slider
- [ ] window operations
- [ ] window decorations/integrate with tabs
- [ ] graph widget, e.g. for frametimes
- [ ] drag and drop stuff (not sure if needed at all)
- [ ] helper for non-convex shapes (in vgv: stencil buffer? or decomposition?)
