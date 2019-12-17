#include<stdio.h>
int main()
{
    system("color A");
    int x,y;
    printf("Enter the value of X and Y coordinate:\n");
    scanf("%d%d",&x,&y);

    if(x > 0 && y > 0)
    {
        printf("First Quadrant\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("Second Quadrant\n");

    }else if(x <0 && y < 0)
    {
        printf("Third Quadrant\n");

    }else
    {
        printf("Fourth Quadrant\n");
    }

    return 0;
}
