#include<stdio.h>
int main()
{
  system("color A");
  char ch;
  printf("Enter The small letters:");
  scanf("%c",&ch);
 if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
  {
     printf("%c is vowel\n",ch);
  }
  else
  {
     printf("%c is consonant\n",ch);
  }
}

