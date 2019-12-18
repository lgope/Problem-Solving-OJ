#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,s,MaiorAB, max;
    scanf("%d %d %d", &a,&b,&s);
    MaiorAB=((a+b+abs(a-b))/2);
    max = ((MaiorAB + s + abs(MaiorAB - s)) / 2);
    printf("%d eh o maior\n",max);
    return 0;
}
