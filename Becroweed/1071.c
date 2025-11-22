#include<stdio.h>
int main() {
    int i, j,temp, sum = 0;
    scanf("%d %d", &i, &j);
    if(i>j){
        temp = i;
        i = j;
        j = temp;
    }
    for(i=i+1;i<=j-1;i++){
        if(i %2 == 1 || i %2 == -1){
            sum+= i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
