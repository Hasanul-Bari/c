#include<stdio.h>
int main()
{
    int num[10],i,apex;

    for(i=0; i<10; i++)
    {
        scanf("%d\n",&num[i]);
    }

    apex=num[0];
    for(i=0; i<10; i++)
    {
        if(num[i]>apex)
        apex=num[i];
    }
    printf("The apex element is %d", apex);


    return 0;
}

