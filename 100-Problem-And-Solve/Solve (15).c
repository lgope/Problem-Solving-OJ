#include<stdio.h>
int main()
{
  system("color A");
   int i, j, rows, count=0;
   printf("Enter the number of rows\n");
   scanf("%d", &rows);
   for (i = 1; i <= 2*rows; i=i+2) {
      for (j = 1; j <= i; j++) {
       printf("%c", 'A'+count);
       if(j <= i/2)
           count++;
        else
           count--;
      }
      count = 0;
      printf("\n");
   }
}
