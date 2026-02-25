#include <assert.h>
#include "../src/quicksort.h"


int main() {
  int arr[] = { 34, 7, 23, 32, 5, 62};
  int n = sizeof(arr) / sizeof(arr[0]);

  quicksort(arr, 0, n-1);

  // Vérification que le tableau est trié
  for (int i = 1; i < n; i++) {
    assert(arr[i - 1] <= arr[i]);

  }

  return 0; // Test réussi

}

