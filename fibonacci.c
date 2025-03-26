#include <stdio.h>
main()
{
    int a=1,b=2;
  int  fib,n;
  print("enter a n number value:");
  scanf("%d",&n);
  for(int i=3;i<=n;i++)
  {
      fib=a+b;
      a=b;
      b=fib;
  }
  printf("%d",fib);

}
