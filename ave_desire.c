#include<stdio.h>

int main()
{
  int i,n,Sum=0,tn;
  float Average;

  printf("enter your desire number :-\n");
  scanf("%d",&n);

  printf("enter your required number :-\n");
  for(i=0;i<n;++i)
   {
     scanf("%d",&tn);
     Sum = Sum +tn;
   }

  Average = Sum/n;

  printf("Sum of the %d Numbers = %d",n, Sum);
  printf("Average of the %d Numbers = %f",n, Average);

  return 0;
}