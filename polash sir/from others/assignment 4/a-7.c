///a program to add the elements of a 1D array
#include<stdio.h>
#define SIZE 100
int main()
{
    int arr[SIZE];
    int i,n,sum;
    printf("Input the size of the array:\n");
    scanf("%d",&n);
    printf("Input the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum=0;
    for(i=0;i<n;i++){
    sum=sum+arr[i];
    }
    printf("The sum of the array is %d",sum);
    return 0;
}
