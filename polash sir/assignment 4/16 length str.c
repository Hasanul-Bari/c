#include<stdio.h>
int main()
{
    char str[50];
    int i, len=0;
    printf("Enter the character string:\n");
    gets(str);
    for(i=0;  str[i]!='\0';  i++)
    {
        len=len+1;
    }
    printf("The length of %s is %d",str,len);
    return 0;
}
