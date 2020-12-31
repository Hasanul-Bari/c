#include<stdio.h>
int main()
{
    int ary[100],i,n,sum=0;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("\nEnter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }
    for(i=0;  i<n;  i++)
    {
        sum=sum+ary[i];
    }
    printf("Sum of all elements of the 1D array is %d", sum);

    return 0;

}
