#include<stdio.h>
int main()
{
    char ary[50],min;
    int i;
    printf("Enter the character array:\n");
    gets(ary);
    min=ary[0];

    for(i=0; ary[i]!='\0'; i++)
    {

        if(ary[i]<min)
        {
            min=ary[i];
        }
    }

    printf("\nThe minimum element in the character array is %c",min);
    return 0;
}
