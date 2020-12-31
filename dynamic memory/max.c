#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ary,*p,n,max;
    printf("Enter size of array:");
    scanf("%d", &n);
    ary=(int *)calloc(n,sizeof(int));
    for(ary=p; ary<p+n; ary++)
    {
        scanf("%d", &ary);
    }
    max=ary[0];
    for(ary=p; ary<p+n; ary++)
    {
        if(ary>max)
        {
            max=ary;
        }
    }
    printf("The maximum element is %d", max);

    return 0;
}
