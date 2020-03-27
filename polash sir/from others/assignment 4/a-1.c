///find the apex element of a 1D array

#include<stdio.h>
#define S 20
int main()
{
    int i,n, arr[S];
    printf("Input the size of the array:\n");
    scanf("%d",&n);
    printf("Input the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The apex element of the array is %d",arr[0]);
    return 0;
}
