///array as parameter in function(2D)
#include<stdio.h>
void abc(int arr1[][10])/*here second index must be  given ,first one is optional*/
{
    printf("Before change in abc arr[3][4]=%d\n",arr1[3][4]);
   arr1[3][4]=100;
    printf("After change in abc arr[3][4]=%d\n",arr1[3][4]);
}
int main()
{
    int arr[5][10];
    arr[3][4]=7;
    printf("Before change in main arr[3][4]=%d\n",arr[3][4]);
    abc(arr);
    printf("After change in main arr[3][4]=%d\n",arr[3][4]);
    return 0;
}


