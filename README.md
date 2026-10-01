# mathdemo

A minimal example project showing how CMake, JSON, and a GitHub Actions
YAML workflow fit together in a small C++ project.

- `main.cpp` + `file1.cpp`...`file5.cpp` — six source files, one entry
  point (`main.cpp`) and five small operations.
- `config.json` — runtime data. Change `"operation"` to `"add"`,
  `"subtract"`, `"multiply"`, or `"divide"`, and change `"a"`/`"b"`, then
  rerun the already-built program — no rebuild needed.
- `CMakeLists.txt` — the build definition. Fetches the nlohmann/json
  library and compiles+links all six `.cpp` files into one executable,
  `mathdemo`.
- `.github/workflows/ci.yml` — a GitHub Actions pipeline that
  automatically configures, builds, and runs the project on every push
  or pull request once this is pushed to GitHub.

## Build and run locally

```bash
cmake -B build
cmake --build build
./build/mathdemo config.json
```

## Try it

Edit `config.json`'s `"operation"` field and rerun the last command
without rebuilding — that's the point of keeping it as data instead of
hardcoding it in `main.cpp`.
