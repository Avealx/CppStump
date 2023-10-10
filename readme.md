# CppStump
Stump for a small C++ project using `CMake` and `GoogleTest`.

# Layout
The stump implements an application `main` that uses some library `util`.

```
├── readme.md
├── cmake
│   └── // instructions to download GoogleTest
└── src
    ├── app
    │    └── // the application code resides here
    └── util
        └── util
            └── // the library `util` resides here
```

# Build
In the top-level folder, execute `cmake -B build -S . && cmake --build build `.

# TODO
- [ ] move generated binaries to `${build-directory}/bin`.