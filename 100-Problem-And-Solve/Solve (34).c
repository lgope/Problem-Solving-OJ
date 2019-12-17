#include<stdio.h>
int main()
{
  system("color A");
    int ang1,ang2,ang3;
    printf("Input two angles of triangle separated by comma : ");
    scanf("%d %d",&ang1,&ang2);
     ang3 = 180 - (ang1 + ang2);
    printf("Third angle of the triangle :%d\n", ang3);
}
