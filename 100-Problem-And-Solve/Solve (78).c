#include<stdio.h>
#include<math.h>
main()
{
  double x1,y1,x2,y2,a1,a2,Distance;
  scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
  a1=(x2-x1)*(x2-x1);
  a2=(y2-y1)*(y2-y1);
  Distance=sqrt(a1+a2);
  printf("%.4lf\n",Distance);
  return 0;
}
