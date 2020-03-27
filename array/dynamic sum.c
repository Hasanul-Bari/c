#include<stdio.h>
int main()
{
    int n,* num,i,sum=0;
    num=new int[n];
    scanf("%d",&n)
    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i])
    }
    for(i=0; i<n; i++)
    {
        printf("num[%d]=%d", i+1,num[i]);
        sum=sum+i;
    }
    printf("The sum is %d",sum);
    return 0;

}
