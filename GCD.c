#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,x;
    printf("Enter the two integer number:");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        x=a;
    }
    else
    {
        x=b;
    }
    again:
        if(a%x==0 && b%x==0)
        {
            printf("The gcd of %d and %d is %d ",a,b,x);
        }
        else
        {
            x=x-1;
            goto again;
        }
    getch();
}

