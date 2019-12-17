#include<stdio.h>
#include<math.h>

int main()
{
    int n[10], i, j = 0, v;
    scanf("%d", &v);

    for(i = 0; i < 10; i++)
    {
        n[i] = v;
        v += v;
    }
    for(i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;

}
