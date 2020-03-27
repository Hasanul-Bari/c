///strlen without using library functions
#include<stdio.h>
main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s",str);
    int i=0,ck=0;
    while(str[i]!='\0'){
        ck++;
        i++;
    }
    printf("The string length: %d\n",ck);
}
