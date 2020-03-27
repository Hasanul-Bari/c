#include<stdio.h>
int largest(int ary[], int );
int main()
{
    int ary[100],n,i,max;
     printf("Enter size of array:");
    scanf("%d", &n);
    printf("\nEnter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ary[i]);
    }
    max=largest(ary,n);
    printf("%d",max);
    return 0;
}

int largest(int a[],int x)
{
    int i , max=a[0];
    for(i=0; i<x; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return (max);

}
