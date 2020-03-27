#include<stdio.h>
int main()
{
    char ary[50],apex;
    int i;
    printf("Enter the character array:\n");
    gets(ary);

    for(i=0; ary[i]!='\0'; i++)
    {
        apex=ary[i];
    }
    printf("The apex element is %c", apex);
    return 0;

}
