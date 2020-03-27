#include<stdio.h>
int biggest(int ary[],int x,int y);
int main()
{
    int ary[100],n,i,c;
    printf("Enter array size=");
    scanf("%d",&n);
    printf("\nEnter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    c=biggest(ary,0,n);
    printf("%d",c);
    return 0;


}
int biggest(int ary[],int x,int y)
{
    int max;
    if (x == y)
        return ary[x];
    else
    {
        max = biggest(ary, x + 1, y);

        if (ary[x] >= max)
            return ary[x];
        else
            return max;
    }
}
