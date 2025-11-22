#include <stdio.h>

int main(){
    int N;
    int a = 0;
    scanf("%d", &N);
    
    for(int i = 2; i <= N; i += 2){
        printf("%d\n", i);
        a = 1;
    }
    
    if(a == 0){
        printf("-1\n");
    }

    return 0;
}
