#include<stdio.h>
int main(void)
{
    int sum=0,num;
    num=100;
    for(num=100; num<200; num++)
    {
        if((num%7)==0)
        {
            printf("%d\n",num);
            sum=sum+num;
        }

    }
    printf("sum=%d",sum);
    return 0;

}
