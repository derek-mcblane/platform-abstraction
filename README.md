# Build
cmake -B build -S . && cmake --build build && cmake --install build --prefix build

# Run
./build/bin/say-hello
