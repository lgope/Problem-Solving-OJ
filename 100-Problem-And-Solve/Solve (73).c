#include<stdio.h>
int main()
{
    system("color A");
    double mark;
    printf("Enter your marks in math:\n");
    scanf("%lf",&mark);
    if(mark<=100 && mark>=80)
    {
        printf("Your Grade: A+\n");
    }
    else if(mark<80 && mark >=70)
    {
        printf("Your Grade: A\n");
    }
    else if(mark<70 && mark >=60)
    {
        printf("Your Grade: A-\n");
    }
    else if(mark<60 && mark >=50)
    {
        printf("Your Grade: B\n");
    }
    else if(mark<50 && mark >=40)
    {
        printf("Your Grade: C\n");
    }
    else if(mark<40 && mark >=33)
    {
        printf("Your Grade: D\n");
    }
    else if(mark<33)
    {
        printf("Your Grade: F\n");
    }
}
