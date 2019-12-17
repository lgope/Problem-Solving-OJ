#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter The Number of n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d cube is:%d\n",i,i*i*i);
    }
}
