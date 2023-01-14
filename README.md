# test_cmake_add_library_stub

Sample project for testing the feature `find_package()` of CMake.

## Dependency

- Environment for C++ and CMake

## Operational prerequisite

- User has already cloned the repository <https://github.com/tarotene/test_cmake_add_library> onto the local.
- User has already built and installed the contents inside the above repository.

## Usage

```sh
cmake -S . -B ./build -DCMAKE_INSTALL_PREFIX="/path/to/find"
cmake --build ./build
```

## License

This project is licensed in [MIT](./LICENSE).
