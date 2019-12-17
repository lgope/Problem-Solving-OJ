 #include<stdio.h>
int main()
{
   system("color A");
   int age;
   printf("Enter your age: \n");
   scanf("%d",&age);
   if(age <= 18)
   {
       printf("NO\n");
   }
   else
   {
       printf("YES\n");
   }
}
