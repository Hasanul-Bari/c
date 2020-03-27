#include<stdio.h>
int main()
{
    char s1[25],s2[25],s3[100];
    int i,j;
    printf("Enter the first character array:");
    gets(s1);
    printf("Enter the second character array:");
    gets(s2);
    for(i=0;  s1[i]!='\0';  i++)
    {
        s3[i]=s1[i];
    }
    for(j=0;  s2[j]!='\0';  j++)
    {
        s3[i+j]=s2[j];
    }
    printf("The final array is:%s\n", s3);

    return 0;

}
