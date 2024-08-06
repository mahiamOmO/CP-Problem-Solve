#include <stdio.h>

int main() {
    int n, i, max;
    
    // Read the number of elements
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize max with the first element of the array
    max = arr[0];
    
    // Iterate over the array to find the maximum element
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Print the maximum element
    printf("%d\n", max);
    
    return 0;
}
