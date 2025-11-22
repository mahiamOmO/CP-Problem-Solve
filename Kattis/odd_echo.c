#include<stdio.h>
int main(){
    int n;
    scanf("%d",& n);
    char words[n][101];
    for(int i =0;i<n;i++){
        scanf("%s",words[i]);
    }
    for(int i = 0;i<n;i+=2){
        printf("%s\n",words[i]);

    }
    return 0;
}