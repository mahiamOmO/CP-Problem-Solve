#include <stdio.h>

int main() {
    int i, p = 1, n, j = 0;
    for (i = 1; i <= 100; i++) {
        scanf("%d", &n);
        if (n > j) {
            j = n;
            p = i;
        }
    }
    printf("%d\n%d\n", j, p);
    return 0;
}
