#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integer numbers: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && c<a)
    {
        printf("Max: %d\n",a);
    }else if(b > c)
    {
        printf("Max: %d\n",b);
    }else
    {
        printf("Max: %d\n",c);
    }
}
