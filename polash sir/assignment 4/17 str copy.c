#include<stdio.h>
int main()
{
    char s1[50], s2[50];
    int i;
    printf("Enter a character array:\ns1=");
    gets(s1);
    for(i=0; s1[i]!='\0';  i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';

    printf("The final array is:\ns2=%s", s2);
    return 0;
}
