#include<stdio.h>
int main()
{
    int num[10],i,sum=0;
    for(i=0; i<10; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<10; i++)
    {
        printf("num[%d]=%d\n", i+1,num[i]);
        sum=sum+num[i];
    }
    printf("The sum is %d",  sum);


    return 0;
}

