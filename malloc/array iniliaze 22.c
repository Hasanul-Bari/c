#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *ptr, *p,sum=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    ptr=(int *)malloc(n*sizeof(int));

    p=ptr;

    printf("Enter the elements: ");
    for(p=ptr; p<ptr+n; p++)
    {
        scanf("%d", p);
        sum=sum+*p;
    }



    printf("The elements are:\n");
    for(p=ptr+n-1; p>=ptr; p--)
    {
        printf("%d\n", *p);
    }

    printf("Sum=%d\n",sum);
    free(ptr);


    return 0;




}

