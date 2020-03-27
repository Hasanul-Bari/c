///array as parameter in function(1D)
#include<stdio.h>
void abc(int arr1[])
{
    printf("Before change in abc arr[3]=%d\n",arr1[3]);
    arr1[3]=100;
    printf("After change in abc arr[3]=%d\n",arr1[3]);
}
int main()
{
    int arr[5]={1,2,3,7,5};
    printf("Before change in main arr[3]=%d\n",arr[3]);
    abc(arr);
    printf("After change in main arr[3]=%d\n",arr[3]);
    return 0;
}

