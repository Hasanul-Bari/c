#include<stdio.h>
#include<math.h>
int main()
{
    int i,j, n,a,s;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a);
        s=sqrt(a);
        if(a==s*s)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;

}
