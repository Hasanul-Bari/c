#include<stdio.h>
int main()
{
    char ary[50],max;
    int i;
    printf("Enter the character array:\n");
    gets(ary);
    max=ary[0];

    for(i=0; ary[i]!='\0'; i++)
    {

        if(ary[i]>max)
        {
            max=ary[i];
        }
    }

    printf("The maximum element in the character array is %c",max);
    return 0;
}
