#include<stdio.h>
int main(){
    int i=0,arr[10],n=0,sum_of_odd=0,sum=0,k=0;
    printf("enter 10 numbers: \n");
    for(i=0;i<10;i++){
        printf("%d)",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        if (arr[i]%2!=0){
        n=n+1;
        sum_of_odd=sum_of_odd+arr[i];}
        else
        k=k+1;

    }
    printf("total sum: %d\n number od odd numbers: %d\nodd numbers sum: %d\nnumber of even terms %d\neven numbers sum: %d",sum,n,sum_of_odd,k,sum-sum_of_odd);
    return 0;

    
}