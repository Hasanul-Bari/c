///maximum element of the array
#include<stdio.h>
#define SIZE 100

int main()
{
    int i,size,max;
    int arr[SIZE];
    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    printf("Input the elements of the array:\n");
    for(i=0;i<size;i++)
        {
    scanf("%d",&arr[i]);
    }
    max=arr[0];

     for(i=0;i<size;i++)
        {
   if(arr[i]>max)
    max=arr[i];
    }
   printf("Maximum element     %d", max);
   return 0;

}
