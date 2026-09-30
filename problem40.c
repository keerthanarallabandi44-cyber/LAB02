#include<stdio.h>
int main(){
    int i=0,sum=0;
    while(i>=0)
    {   sum=sum+i;
        printf("enter the number: ");
        scanf("%d",&i);
        
    }
    printf("sum = %d",sum);
    return 0;
}