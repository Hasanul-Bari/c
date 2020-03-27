#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *ptr, *p;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("No space available\n");
        exit(1);
    }

    p=ptr;

    printf("Enter the elements: ");
    for(p=ptr; p<ptr+n; p++)
    {
        scanf("%d", p);
    }




    for(p=ptr+n-1; p>=ptr; p--)
    {
        printf("%d is stored at address %d\n", *p,p);
    }


    free(ptr);


    return 0;




}


