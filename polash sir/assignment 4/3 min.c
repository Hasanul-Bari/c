#include<stdio.h>
int main()
{
    int ary[100],i,n,min;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("\nEnter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }
    min=ary[0];
    for(i=0; i<n; i++)
    {
        if(ary[i]<min)
        {
            min=ary[i];
        }
    }
    printf("The minimum element is %d", min);

    return 0;
}
