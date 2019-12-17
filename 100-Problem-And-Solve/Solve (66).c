#include<stdio.h>
int main()
{
  system("color A");
	int i = 0;
	int j = 0;
	j = i++ + ++i;
  printf("%d %d",i,j);
}
