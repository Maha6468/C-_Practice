#include <stdio.h>
int main ()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%5 && num%7)
    {
        printf("%d is divisiable number.",num);
    }
    else
    {
        printf("%d is not divisiable number.",num);
    }

}
