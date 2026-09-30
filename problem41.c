#include<stdio.h>
int main(){
    int n;
    printf("enter the number you want factors of : ");
    scanf("%d",&n);
    int i=1;
    printf("the factors of the given number are : ");
    while(i*i<=n){
        if(n%i==0){
        if(i!=n/i)
        printf("\n%d,%d\n",i,n/i);
        else
        printf("%d",i);}
        i++;
    }
return 0;
}