#include<stdio.h>
int main()
{
    system("color A");
    int a,b,x,y;
    printf("Enter the value of a, b, x and y:\n");
    scanf("%d%d%d%d",&a,&b,&x,&y);
    printf("%d\n",(a*b)+(x*y));
}
