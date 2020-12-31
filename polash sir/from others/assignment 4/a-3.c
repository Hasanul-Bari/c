///minimum element of the array
#include<stdio.h>
#define SIZE 100

int main()
{
    int i,size,min;
    int arr[SIZE];
    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    printf("Input the elements of the array:\n");
    for(i=0;i<size;i++)
        {
    scanf("%d",&arr[i]);
    }
    min=arr[0];

     for(i=0;i<size;i++)
        {
   if(arr[i]<min)
    min=arr[i];
    }
   printf("Minimum element     %d", min);
   return 0;

}
