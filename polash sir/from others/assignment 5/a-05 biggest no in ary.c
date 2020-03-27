#include <stdio.h>

int largest(int list[], int lower, int upper);

int main()
{
   int n,i;
   printf("Enter the size of the array:\n");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)scanf("%d",&arr[i]);

    printf("The largest element in array: %d", largest(arr, 0, n-1));
    return 0;
}

int largest(int list[], int lower, int upper)
{
    int max;
    if (lower == upper)
        return list[lower];
    else
    {
        max = largest(list, lower + 1, upper);

        if (list[lower] >= max)
            return list[lower];
        else
            return max;
    }
}
