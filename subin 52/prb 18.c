#include<stdio.h>

int main()
{
    int i,n,r,x,y;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&r, &x, &y);

        if((2*r<=x) && (2*r<=y))
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
