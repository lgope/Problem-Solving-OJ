#include<stdio.h>
int main()
{
    int n, hours, minutes, temp;
    scanf("%d", &n);
    hours = n / 3600;
    temp = n % 3600;
    minutes = temp / 60;
    temp = temp % 60;
    printf("%d:%d:%d\n", hours, minutes, temp);
    return 0;
}
