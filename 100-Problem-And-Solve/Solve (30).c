#include <stdio.h>
int main()
{
  system("color A");
	float S=0;
	int i;
	for(i=1;i<=50;i++)
	{
		S+=(float)1/i;
  }
    printf("Value of S: %.2f\n",S);
}
