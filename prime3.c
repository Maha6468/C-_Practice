#include <stdio.h>
int main ()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<2)
    {
        printf("%d is not a prime number",num);
    }
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d is not a prime number.\n",num);
            return 0;
        }
    }
    printf("%d is a prime number.",num);
    return 0;

}

