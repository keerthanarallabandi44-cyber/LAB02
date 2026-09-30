#include<stdio.h>
int main(){
    printf("enter 10 numbers:\n");

    int i=0,arr[10],n=0,positive=0,negative=0;
    for(i=0;i<10;i++){
        printf("%d)",i+1);
        scanf("%d",&arr[i]);

    if(arr[i]==0)
        n=n+1;
    else
    if(arr[i]<0)
    negative=negative+1;
    else
    positive=positive+1;   
    
}

printf("positive: %d\nnegative: %d\nno. of times zero has been entered: %d",positive,negative,n);
return 0;
}