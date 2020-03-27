///pointer closer look
#include<stdio.h>
main()
{
    int arr[100];
    int *p;
    scanf("%d",&arr[0]);
    //p=arr;
p=&arr[0];
    printf("%d",*p);
}
