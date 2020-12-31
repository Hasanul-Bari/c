#include<stdio.h>
int main()
{
    char str[211];
    int n,i,j,c=0,f=1,k;
    scanf("%d ",&n);
    for(i=0; i<n; i++)
    {
        gets(str);
        for(j=0; str[j]!='\0'; j++)
        {
            if(str[j]==' ')
            {
                c++;
            }
        }
        c=c+1;
        for(k=1; k<=c; k++)
        {
            f=f*(k-1);
        }
        printf("1/%d\n",f);
        c=0;


    }
    return 0;
}
