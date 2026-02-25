#include <stdio.h>
#include "quicksort.h"
#include "binary_search.h"

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(arr) / sizeof(arr[0]);  // <-- n est déclaré ici

    printf("=== TP10: Démonstration QuickSort et Binary Search ===\n\n");

    printf("Tableau initial: ");
    print_array(arr, n);

    quicksort(arr, 0, n - 1);

    printf("Tableau trié: ");
    print_array(arr, n);

    int target = 23;
    int index = binary_search(arr, n, target);
    if (index != -1)
        printf("Élément %d trouvé à l'indice %d\n", target, index);
    else
        printf("Élément %d non trouvé\n", target);

    target = 99;
    index = binary_search(arr, n, target);
    if (index != -1)
        printf("Élément %d trouvé à l'indice %d\n", target, index);
    else
        printf("Élément %d non trouvé\n", target);

    return 0;
}
