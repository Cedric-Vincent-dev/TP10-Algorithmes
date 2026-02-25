cmake_minimum_required(VERSION 3.10)
project(TP10_Algorithmes C)

set(CMAKE_C_STANDARD 11)

# Librairie avec les algorithmes
add_library(algorithms src/quicksort.c src/binary_search.c)

# Programme principal
add_executable(tp10 src/main.c)
target_link_libraries(tp10 algorithms)

# Activer les tests
enable_testing()

# Test unitaires en C 
add_executable(test_quicksort tests/test_quicksort.c)
target_link_libraries(test_quicksort algorithms)
add_test(NAME test_quicksort COMMAND test_quicksort)

add_executable(test_binary_search tests/test_binary_search.c)
target_link_libraries(test_binary_search algorithms)
add_test(NAME test_binary_search COMMAND test_binary_search)

