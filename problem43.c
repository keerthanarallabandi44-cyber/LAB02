#include<stdio.h>
int main(){
    int sales,com;
    printf("Enter the sales amount in rupees: ");
    scanf("%d",&sales);
    if(sales<=500)
    printf("commission is rupees %.2f",(0.05)*sales);
    else if(sales>500 && sales<=2000)
    printf("commission is rupees %.2f",35.0+(sales-500)/10);
    else if (sales>2000 && sales<=5000)
    printf(" commission is rupees %.2f",185.0 + 12*(sales-2000)/100);
    else
    printf("commission is rupees %.2f",0.125*(sales-5000));
    return 0;
}