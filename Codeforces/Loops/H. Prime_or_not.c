#include <stdio.h>
#include <math.h>

int is_prime(int X) {
    if (X <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    if (X == 2) {
        return 1; // 2 is the only even prime number
    }
    if (X % 2 == 0) {
        return 0; // All other even numbers are not prime
    }
    // Check for odd divisors from 3 to sqrt(X)
    for (int i = 3; i <= sqrt(X); i += 2) {
        if (X % i == 0) {
            return 0; // X is divisible by i, so it's not a prime
        }
    }
    return 1; // X is a prime number
}

int main() {
    int X;
    scanf("%d", &X);

    if (is_prime(X)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
