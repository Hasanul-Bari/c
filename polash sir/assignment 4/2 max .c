#include<stdio.h>
int main()
{
    int ary[100],i,n,max;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("\nEnter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }
    max=ary[0];
    for(i=0; i<n; i++)
    {
        if(ary[i]>max)
        {
            max=ary[i];
        }
    }
    printf("The maximum element is %d", max);

    return 0;
}
