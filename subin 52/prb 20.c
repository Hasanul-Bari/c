#include<stdio.h.>
int count(char * );
int main()
{
    char str[1005];
    int i,n,a;
    scanf("%d ", &n);
    for(i=0; i<n; i++)
    {
        gets(str);
        a=count(str);

        printf("%d\n",a);


    }
    return 0;
}

int count(char *str)
{
        int c=0,m;
        while(*str!='\0')
        {
            if(*str==' ')
            {
                c=1+count(str+1);
            }
        }

        c++;
        m=c*420;
        return m;
}

