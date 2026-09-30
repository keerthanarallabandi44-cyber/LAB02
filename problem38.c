#include<stdio.h>
int main(){
    int i,n;
    printf("enter the number you want perfect square numbers till : ");
    scanf("%d",&n);
    i=1;
    for(i=1;i<=n;i++){
        printf("%d\n",i*i);
    }
    return 0;
}