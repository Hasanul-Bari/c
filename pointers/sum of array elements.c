#include<stdio.h>
int main()
{
    int ary[1000],n,i,sum=0,*p;
    printf("Enter array size:");
    scanf("%d", &n);
    printf("\nEnter %d elements\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }
    p=ary;
    for(i=0; i<n; i++)
    {
        printf("ary[%d]  %d   %d\n", i, *p, p);
        sum=sum+*p;
        p++;
    }
    printf("%d", sum);
    return 0;

}
