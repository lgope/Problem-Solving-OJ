#include<stdio.h>
int main()
{
  system("color A");
    int rank;
    printf("Please enter your rank:\n");
    scanf("%d",&rank);

    if(rank == 1)
    {
        printf("Your Salary: 2,50,000 BDT.\n");
    }
    else if(rank == 2)
    {
        printf("Your Salary: 2,10,000 BDT.\n");
    }
     else if(rank == 3)
    {
        printf("Your Salary: 1,50,000 BDT.\n");
    }
     else if(rank == 4)
    {
        printf("Your Salary: 80,000 BDT.\n");
    }
     else if(rank >= 5)
    {
        printf("Your Salary: 50,000 BDT.\n");
    }
}
