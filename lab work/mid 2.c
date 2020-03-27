#include<stdio.h>
int main()
{
    int *ary[];
    int n,i;
    print("Enter array size=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("address of %d is %d",*ary[i],ary[i]);
    }
}
