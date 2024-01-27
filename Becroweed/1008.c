#include<stdio.h>
int main()
{
  int p,q;
  float r;
  double t;
  scanf("%d %d %f",&p,&q,&r);
  t = q*r;
  printf("NUMBER = %d\n",p);
  printf("SALARY = U$ %.2lf\n",t);
  return 0;

}
