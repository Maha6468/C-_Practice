
#include <stdio.h>
int main()
{
    int num,reverse=0,remain,orginal=num;
    int i=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for(;0<num;i++)
    {
        remain=num%10;
        reverse=reverse*10+remain;
        num/=10;
    }

    if(orginal==reverse)
    {
        printf(" is a palindrom number");
    }
    else
    {
        printf(" is not a palindrom number");
    }
}
