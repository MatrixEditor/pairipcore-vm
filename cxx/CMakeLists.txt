cmake_minimum_required(VERSION 3.8)
project(pairipvm)

# -----------------------------------------------------------------------------
# # source setup
# -----------------------------------------------------------------------------

set(sources
    # MAIN
    src/main.cpp
    # lib files
    src/pairipvm/insn.cpp
    src/pairipvm/vm.cpp
    src/pairipvm/opdefs.cpp
)

# -----------------------------------------------------------------------------
# # target definitions
# -----------------------------------------------------------------------------
add_executable(pairipvm ${sources})

target_compile_options(
    pairipvm
    PUBLIC
    -std=c++20 -Wall -O2 -march=native -fno-strict-aliasing -g
)

target_include_directories(
    pairipvm
    PUBLIC
    include/
)
