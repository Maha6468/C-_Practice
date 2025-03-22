#include <stdio.h>
int main ()
{
    int num ;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>=100 && num<=999)
{
    printf("%d is three digit number.",num);
}
else
{
      printf("%d is not three digit number.",num);
}

}
