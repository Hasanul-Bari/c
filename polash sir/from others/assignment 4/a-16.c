///find the sting length
#include<stdio.h>
#include<stdio.h>
#define SIZE 100
int main()
{
    int l;
    char s[SIZE];
    printf("Input the string:\n");
    gets(s);
    l=strlen(s);
    printf("The length of the string is %d",l);
    return 0;
}
