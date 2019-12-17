#include<stdio.h>
int main()
{
  system("color A");
  double gpa;
  printf("Enter your GPA(2.00-5.00):\n");
  scanf("%lf",&gpa);
  if(gpa<5.00)
  {
    printf("NO\n");
  }
  else
  {
    printf("YES\n");
  }
}

