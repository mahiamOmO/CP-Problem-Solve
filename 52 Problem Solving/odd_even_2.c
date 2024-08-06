#include <stdio.h>
#include <stdlib.h>  

int main() {
    int T;
    char n[101];
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {  
        scanf("%s", n);
        int num = atoi(n);  
        if (num % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}
