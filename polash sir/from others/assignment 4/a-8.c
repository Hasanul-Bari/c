//merge two 1d array into another 1d array
#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,n1,n2,arr[100],arr1[100],arr2[100];
    int j=0;
    printf("Input the size of the two array:\n");

    scanf("%d%d",&n,&n1);
    printf("Input the elements of the first array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     printf("Input the elements of the second array:\n");
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    n2=n1+n;
   for(i=0;i<n2;i++){
         arr2[i]=arr[i];
    if(i>n-1){
        arr2[i]=arr1[j];
   j++;
    }


   }
   printf("The merged array is  ");
    for(i=0;i<n2;i++){
        printf("%d ",arr2[i]);
    }

    return 0;
}
