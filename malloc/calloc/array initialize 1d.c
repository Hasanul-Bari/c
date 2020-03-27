#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,*p,i,sum=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    ptr=(int *)calloc(n,sizeof(int));

    if(ptr==NULL)
    {
        printf("Not Enough Space\n");
        exit(0);
    }
    p=ptr;
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", ptr);
        sum=sum+*ptr;
        ptr++;
    }

    for(i=0; i<n; i++)
    {
        printf("%d\n", *p);
        p++;
    }
    printf("%d",sum);
    free(ptr);
    return 0;
}
