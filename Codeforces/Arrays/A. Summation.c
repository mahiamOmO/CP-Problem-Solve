#include <stdio.h>
#include <stdlib.h> // For abs function

int main() {
    int N;
    scanf("%d", &N); // Read the number of elements

    long long sum = 0; // Use long long to handle large sums
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num); // Read each number
        sum += num; // Add the number to the sum
    }

    // Print the absolute value of the sum
    printf("%lld\n", llabs(sum));

    return 0;
}
