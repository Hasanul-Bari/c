#include<stdio.h>
int main()
{
    char str[51];
    int i,j,n;
    scanf("%d ", &n);
    for(i=0; i<n; i++)
    {
        gets(str);
        for(j=0; str[j]!='\0'; j++)
        {
            if(str[j]=='L')
            {
                str[j]=str[j-1];
            }
            if(str[j]=='R')
            {
                str[j]=str[j+1];
            }
        }
        printf("%s\n",str);
    }
    return 0;

}
