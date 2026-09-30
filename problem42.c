#include<stdio.h>

int main(){
    int n,i,is_prime=1;
    printf("enter the number : ");
    scanf("%d",&n);

    i=2;
    while(i*i<=n){
    if(n%i==0){
        is_prime=0;
    }
else
i++;}
if(is_prime==0)
printf("it is not a prime number");

else
printf("it is a prime number");
return 0;



}