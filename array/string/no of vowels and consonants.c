#include<stdio.h>
int main()
{
    char s[100];
    int i,vow=0,con=0;
    printf("Enter a text string:");
    gets(s);
    for(i=0;  s[i]!='\0'; i++)
    {
        if(s[i]=='a' || s[i]=='e'  || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
           s[i]=='A' || s[i]=='E'  || s[i]=='I' || s[i]=='O' || s[i]=='U')

        {
            vow=vow+1;
        }
        else
        {
            con=con+1;
        }
    }
    printf("\nThe no of vowels= %d", vow);
    printf("\nThe no of consonants= %d", con);
    return 0;
}
