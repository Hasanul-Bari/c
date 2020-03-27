#include<stdio.h>
int main()
{
    char s[1000];
    int a,j,i,count=0;
    scanf("%d ", &a);
    for(j=1; j<=a; j++)
    {
        gets(s);
        for(i=0; s[i]!='\0'; i++ )
        {
            if(s[i]==' ')
            {
                count++;
            }
        }
        count++;
        printf("%d\n", count);
        count=0;
    }

    return 0;

}
