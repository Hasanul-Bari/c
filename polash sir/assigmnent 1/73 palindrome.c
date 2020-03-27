#include<stdio.h>
int main()
{
    int x,y,l;
    char str[50];
    gets(str);
    l=strlen(str);
    x=0;
    y=l-1;
    while(x<=y)
    {
      if(str[x]!=str[y])
            break;

      x++;
      y--;
    }
    if(x>=y)
        printf("%s is palindrome\n",str);
    else
        printf("%s is not palindrome\n",str);

    return 0;
}
