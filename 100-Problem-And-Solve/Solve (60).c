#include<stdio.h>
int main()
{
    system("color A");
    int a,b;
    float c,SALARY;
    printf("Enter The Numbers Are:");
    scanf("%d %d %f",&a,&b,&c);
    SALARY = b*c;
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;

}
