#include <stdio.h>
int main()
{
    int a=1,b=2;
    int n,fib;
    printf("enter  a value: ");
    scanf("%d",&n);
    printf("%d %d\n",a,b);
    for(int i=3;i<=n;i++)
    {
        // 1,2,3,5,8,13
        //1+2=3
        //2+3=5
        //3+5=8

        fib=a+b;
        printf("%d\n",fib);
        a=b;
        b=fib;


    }




}
