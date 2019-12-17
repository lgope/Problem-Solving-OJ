#include<stdio.h>
int main()
{
   system("color A");
   double marksInPhysics,marksInMath,marksInC,marksInEng,avarage;
   marksInPhysics = 65.00;
   marksInMath = 83.50;
   marksInC = 85.50;
   marksInEng = 67.50;
   avarage=(marksInPhysics + marksInMath + marksInC + marksInEng)/4;
   printf("%.2lf\n",avarage);
}
