#include <stdio.h>
int main()
{
int no;
char name1[15],name2[15],name3[15];
printf("Enter seroial number and name one\n");
scanf("%d %15c",&no,name1);
printf("%d %15s\n\n",no,name1);
printf("enter serial number and name two\n\n");
scanf("%d %s",&no,name2);
printf("%d %15s\n\n",no,name2);
printf("enter srial number and name three\n");
scanf("%d %15s",&no,name3);
printf("%d %15s\n\n",no,name3);



}
