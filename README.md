# no

Small _no_ version of [_yes_](https://www.gnu.org/software/coreutils/manual/html_node/yes-invocation.html) from GNU coreutils.

_no_ prints the command line arguments, separated by spaces and followed by a newline, forever until it is killed. If no arguments are given, it prints 'n' followed by a newline forever until killed.

## Installation

#### Requirements

+ make
+ gcc

Build and install with:

```
git clone https://github.com/xfgusta/no.git
cd no
make
```

And then `make install` as root.

To uninstall, run `make uninstall` as root as well.

## Example

`no` prints 'n' forever until killed:

```
n
n
n
```

`no hello cruel world` prints 'hello cruel world' forever until killed:

```
hello cruel world
hello cruel world
hello cruel world
```

## License

The MIT License (MIT)

Copyright (c) 2021 Gustavo Costa