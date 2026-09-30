#include<stdio.h>
int main(){
    int i,j,k;
    for(i=0;i<4;i++){
        for(j=0;j<=3-i;j++)
        printf(" ");
        for(j=0;j<=i;j++)
            printf("%d",j+1);
        for(k=i;k>=1;k--)
        printf("%d",k);
      
            
        
        printf("\n");
    }
    return 0;



}