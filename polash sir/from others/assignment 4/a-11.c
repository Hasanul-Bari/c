/// a program to find the add the element of a 2D array


#include<stdio.h>
#define SIZE 100
int main()
{
    int arr[SIZE][SIZE];
    int i,j,n,n1,sum;
    printf("Input the row and column size:\n");
    scanf("%d%d",&n,&n1);
    printf("Input the elements of the array:\n");
    for (i=0;i<n;i++){
        for(j=0;j<n1;j++)
            scanf("%d",&arr[i][j]);
    }
    sum=0;

      for (i=0;i<n;i++){
        for(j=0;j<n1;j++){
          sum=sum+arr[i][j];
        }

    }
    printf("The sum of the  element of the array is %d", sum);
    return 0;

}

