///find the frequency of a taken  character in the string
#include<stdio.h>
#include<string.h>
int frequency(char s1[],char n);
main()
{
    char n;
    char s1[100];
    gets(s1);
printf("The entered string is %s\n",s1);
printf("Enter the character you want to find the frequency of it:\n");
scanf("%c",&n);

int x=frequency(s1,n);
printf("Frequency is %d\n",x);
}
int frequency(char s1[],char n)
{
    int  ck=0;
    for(int i=0;i<strlen(s1);i++)
    {
        if(s1[i]==n){
            ck++;
        }
    }
    return ck;

}

