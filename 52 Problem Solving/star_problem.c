#include<stdio.h>

int main() {
    int T, i, j, N;
    scanf("%d", &T); 

    for (i = 0; i < T; i++) {
        scanf("%d", &N);  
        for (j = 0; j < N; j++) { 
            for (int k = 0; k < N; k++) {
                printf("*");
            }
            printf("\n"); 
        }
        if (i != T - 1) {
            printf("\n");
        }
    }

    return 0;
}
