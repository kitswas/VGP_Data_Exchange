# VirtualGamePad Data Exchange

This is a part of [the VirtualGamePad project](https://kitswas.github.io/VirtualGamePad/).

This repository contains the [colfer](https://github.com/pascaldekloe/colfer) source files used to generate the data exchange code for the VirtualGamePad project and the generated code for the C and Java languages.

## Usage

### To generate C code from .colf files

```bash
colf -b C C
```

### To generate Java code from .colf files

```bash
colf -p io.github.kitswas Java
```

## Formatting

Hand-written C sources are formatted with [clang-format](https://clang.llvm.org/docs/ClangFormat.html):

```bash
clang-format -i *.c *.h # Or --dry-run --Werror to check only
```

The generated `Colfer.c`/`Colfer.h` are excluded via `.clang-format-ignore`.
