#include<stdio.h>
int main()
{
    int product1_code,product1_number,product2_code,product2_number;
    float product1_price,product2_price,amount_paid;
    scanf("%d %d %f",&product1_code,&product1_number,&product1_price);
    scanf("%d %d %f",&product2_code,&product2_number,&product2_price);
    amount_paid=(product1_number*product1_price)+(product2_number*product2_price);
    printf("VALOR A PAGAR: R$ %.2f\n",amount_paid);
}
