#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int a, b, c, d, ab;
    scanf("%d %d %d", &a, &b, &c);
    //d = abs(a-b);

    ab = (a + b + abs(a-b)) / 2;
    ab = (c + ab + abs(c - ab)) / 2;

    printf("%d eh o maior\n", ab);

    return 0;
}
