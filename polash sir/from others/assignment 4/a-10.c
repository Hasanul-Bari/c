/// a program to find the maximum element of a 2D array


#include<stdio.h>
#define SIZE 100
int main()
{
    int arr[SIZE][SIZE];
    int i,j,n,n1,max;
    printf("Input the row and column size:\n");
    scanf("%d%d",&n,&n1);
    printf("Input the elements of the array:\n");
    for (i=0;i<n;i++){
        for(j=0;j<n1;j++)
            scanf("%d",&arr[i][j]);
    }
    max=arr[0][0];

      for (i=0;i<n;i++){
        for(j=0;j<n1;j++){
            if(max<arr[i][j])
                max=arr[i][j];
        }

    }
    printf("The maximum  element of the array is %d", max);
    return 0;

}
