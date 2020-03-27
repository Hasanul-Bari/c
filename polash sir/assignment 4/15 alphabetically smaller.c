#include<stdio.h>
int main()
{
    char s1[25],s2[25];
    int x;
    printf("Enter the first character array:");
    gets(s1);
    printf("Enter the second character array:");
    gets(s2);
    x=strcmp(s1,s2);

    if(x==0)
    {
        printf("The character array are alphabetically same");
    }
    else if(x<0)
    {
        printf("The second character array is alphabetically smaller");
    }
    else
    {
        printf("The first character array is alphabetically smaller");
    }

    return 0;
}
