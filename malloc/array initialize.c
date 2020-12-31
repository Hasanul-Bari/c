#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *ptr, *p,i,sum=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    ptr=(int *)malloc(n*sizeof(int));

    p=ptr;


    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", ptr);
        sum=sum+*ptr;
        ptr++;
    }



    printf("The elements are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", *p);
        p++;
    }
    printf("Sum=%d\n",sum);
    free(ptr);








    return 0;




}
