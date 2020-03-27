///a program to copy the elements of a character array into another array;
#include<stdio.h>
int main()
{

    char s[100],s1[100];
    printf("Input the elements of the first character array:\n");
      gets(s);
        printf("Input the elements of the second character array:\n");
        gets(s1);
        strcpy(s,s1);
        printf("The copied string is %s",s);
        return 0;

}
