#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int l,a,i,n;
    scanf("%d ", &n);
    for(i=0; i<n; i++)
    {
          gets(str);
        l=strlen(str);
        a=str[l-1];
        if((a-48)%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;

}
