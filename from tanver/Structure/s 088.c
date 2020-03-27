///ctype
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    int ascii;
    ch=getchar();
    ascii=toascii(ch);
    printf("%d",ascii);
}
