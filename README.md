# {%PROJECT_NAME%}

{# Project template generated via [`project-templates`](https://github.com/j-haines/project-templates). #}

## Requirements

- CMake 3.14+
- Compiler with C++17 support

## Building

```bash
$ cmake [-DCMAKE_BUILD_TYPE=Debug] -Bbuild
$ make
$ ./build/bin/{%PROJECT_NAME%}
$ ./build/tests/{%PROJECT_NAME%}_tests  # if CMAKE_BUILD_TYPE=Debug
```
