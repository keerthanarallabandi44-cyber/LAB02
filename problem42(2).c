#include<stdio.h>
int main(){
    int i,j,k,l,a,b,c,d;
    for(i=0;i<=3;i++){
    for(k=0;k<=3-i;k++)
    printf(" ");
    for(j=0;j<=i;j++)
    printf("*");
    for(l=0;l<i;l++)
    printf("*");

    printf("\n");
}
for(a=0;a<4;a++){
    for(b=0;b<2+a;b++)
    printf(" ");
    for(c=0;c<3-a;c++)
    printf("*");
    for(d=0;d<2-a;d++)
    printf("*");
    printf("\n");
}
return 0;
}