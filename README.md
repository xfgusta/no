# no

Small _no_ version of [_yes_](https://www.gnu.org/software/coreutils/manual/html_node/yes-invocation.html) from GNU coreutils.

_no_ prints the command line arguments, separated by spaces and followed by a newline, forever until it is killed. If no arguments are given, it prints 'n' followed by a newline forever until killed.

# Examples

Prints 'n' forever until killed:

```
$ no
n
n
n
...
```

Prints 'hello cruel world' forever until killed:

```
$ no hello cruel world
hello cruel world
hello cruel world
hello cruel world
...
```

# Install

## Fedora

```
# dnf copr enable sirguxx/no
# dnf in no
```

## From source

```
$ make
# make install
```

# Uninstall

## Fedora

```
# dnf rm no
```

## From source

```
# make uninstall
```
