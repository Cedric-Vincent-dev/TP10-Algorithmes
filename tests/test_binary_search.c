#include <assert.h>
#include "../src/binary_search.h"

int main() {
    int arr[] = {5, 7, 23, 32, 34, 62};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Test : élément présent
    assert(binary_search(arr, n, 23) != -1);

    // Test : élément absent
    assert(binary_search(arr, n, 99) == -1);

    return 0; // Test réussi
}

