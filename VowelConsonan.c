#include<stdio.h>
int main()
{
    char ch;
    printf("enter a letter:");
    scanf("%c", &ch);
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("'%c' is vowel.\n", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is consonant.\n", ch);
    }
    else
    {
        printf("%c is not a letter\n", ch);
    }
}
