#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
   if(a>b){
    b+=24;
    printf("O JOGO DUROU %d HORA(S)\n",b-a);
   }
   else if(a==b){
    printf("O JOGO DUROU 24 HORA(S)\n");
   }
   else{
    printf("O JOGO DUROU %d HORA(S)\n",b-a);
   }
    return 0;
}
