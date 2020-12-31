///find the maximum element of 1d the array of character in  c
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s[100],max;

    printf("Input the string:\n");
    gets(s);
    max=s[0];
      j=strlen(s);
    for(i=0;i<j;i++){
        if(max<s[i])
            max=s[i];
    }
    printf("The maximum array is %c",max);
    return 0;
}
