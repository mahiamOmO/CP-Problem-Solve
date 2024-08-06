#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int numbers[N];
    for(int i=0;i<N;i++){
        scanf("%d",& numbers[i]);
    }
    int evenCount = 0;
    int oddCount = 0;
    int positiveCount = 0;
    int negativeCount = 0;
    for(int i=0;i<N;i++){

        if(numbers[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
        if(numbers[i]>0){
            positiveCount++;
        }else if(numbers[i]<0){
            negativeCount++;
        }
    }

    printf("Even: %d\n",evenCount);
    printf("Odd:  %d\n",oddCount);
    printf("Positive: %d\n",positiveCount);
    printf("Negative: %d\n",negativeCount);

     return 0;
}