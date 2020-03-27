///find the minimum element of the array of character in  c
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s[100],min;

    printf("Input the string:\n");
    gets(s);
    min=s[0];
j=strlen(s);
    for(i=0;i<j;i++){
        if(min>s[i])
            min=s[i];
    }
    printf("The minimum array is %c",min);
    return 0;
}

