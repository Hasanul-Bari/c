#include<stdio.h>
int main()
{
    char str[20];
    char *s;
    int c=0;

    printf("Enter the string: ");
    gets(str);

    s=str;

    while(*s!='\0')
    {
        printf("%c is stored at address %d\n",*s,s);
        s++;
        c++;
    }

    printf("\nThe length of the string is %d\n",c);

    return 0;
}
