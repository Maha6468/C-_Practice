
#include <stdio.h>
int main()
{
    int mark;
    printf("Enter a mark:");
    scanf("%d",&mark);
    if(mark>=80)
    {
          printf("I have got A+");
    }
     else if(mark>=70)
    {
          printf("I have got A-");
    }

    else if(mark>=60)
    {
          printf("I have got B");
    }
    else if(mark>=50)
    {
          printf("I have got C");
    }
       else if(mark>=40)
    {
          printf("I have got D");
    }
       else if(mark>=33)
    {
          printf("I have got E");
    }
    else
    {
        printf("Fail");
    }

   getch();
}
