#include<stdio.h>
int main(){
    int i,j,n;
    for(i=0;i<5;i++){
        for(n=4;n>i;n--)
        printf(" ");
        for(j=0;j<=i;j++){

            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}