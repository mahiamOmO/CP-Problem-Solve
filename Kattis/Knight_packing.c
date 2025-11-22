#include <stdio.h>
int main() {
    int N;
    
    scanf("%d", &N);
    
    if (N % 2 == 1) {
        printf("first\n");
    } else {
        printf("second\n");
    }
    
    return 0;
}
