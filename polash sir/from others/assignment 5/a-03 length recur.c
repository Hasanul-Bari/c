///function to calculate length of the string using recursion

#include <stdio.h>

int stringLength(char *str,int length)
{

    if(*str!='\0')
    {

        stringLength(str+1,length+1);
    }
    else
    {
        return length;
    }
}
int main()
{
    char str[1000];
    int length;

    printf("Enter a string: ");
    gets(str);

    length=stringLength(str,0);

    printf("String length : %d\n",length);

    return 0;
}

