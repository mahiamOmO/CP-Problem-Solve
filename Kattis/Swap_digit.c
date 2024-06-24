#include <stdio.h>
int main() {
    int num, a, b, temp;

    scanf("%d", &num);
    a = num / 10;   
    b = num % 10;   
    temp = a;
    a = b;
    b = temp;

    int swap_num = a * 10 + b;
    printf("%d\n", swap_num);

    return 0;
}
