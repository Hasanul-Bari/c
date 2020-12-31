#include<stdio.h>
int main()
{
    int i;
    float num[10],sum=0;
    for(i=0; i<10; i++)
    {
        scanf("%f", &num[i]);
    }
    for(i=0; i<10; i++)
    {
        printf("num[%d]=%.2f\n", i+1,num[i]);
        sum=sum+num[i]*num[i];
    }
    printf("Total=%.2f",sum);

    return 0;
}
