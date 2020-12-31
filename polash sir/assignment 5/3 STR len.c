#include<stdio.h>
int length(char *s);

int main()
{
    char str[100];
    int a;
    printf("Enter a string\n");
    gets(str);
    a=length(str);
    printf("%d", a);
    return 0;
}
int length(char *s)
{
    int c=0;
    if(*s!='\0')
    {
        c=1+length(s+1);
        return c;
    }

}
