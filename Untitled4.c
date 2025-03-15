#include<stdio.h>
int main()
{
    int month, year;
    printf("enter month\n");
    scanf("%d\n", &month);
    year= month/12;
    month=month%12;
    printf("year=%d month=%d", year, month);
}
