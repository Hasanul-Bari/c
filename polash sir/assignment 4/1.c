#include<stdio.h>
int main()
{
    int ary[100],i,n,apex;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("\nEnter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }


    printf("The apex element is %d", ary[i-1]);


    return 0;
}
