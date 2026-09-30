#include<stdio.h>
int main(){
    printf("enter 10 numbers: \n");
    int i=0,arr[10],sum=0;
    for(i=0;i<10;i++){
        printf("%d)",i+1);
        scanf("%d",&arr[i]);    }

    for(i=0;i<10;i++){
        sum=sum+arr[i];
    }
    printf("%d is the sum.",sum);
    return 0;
}