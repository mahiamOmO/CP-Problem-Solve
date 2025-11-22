#include <stdio.h>

int main() {
    int j = 0;
    float n, N[2], avg = 0.0;

    while (1) {
        scanf("%f", &n);
        if (n >= 0 && n <= 10) {
            N[j] = n;
            j++;
        } else {
            printf("nota invalida\n");
            continue;
        }

        if (j >= 2)
            break;
    }

    avg = (N[0] + N[1]) / 2.0;
    printf("media = %.2f\n", avg);

    return 0;
}
