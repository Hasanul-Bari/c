/// to add the elements of two character arrays into another array
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],s3[100];

    printf("Input the elements of the first character array:\n");
    gets(s1);
     printf("Input the elements of the second character array:\n");
    gets(s2);

    strcat(s1,s2);
    strcpy(s3,s1);
    printf("The final character is %s",s3);
    return 0;
}
