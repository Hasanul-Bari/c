#include<stdio.h>
void count_to_n(int count,int n)
{

    printf("%d",count);
    if(count<n)
    {
        count_to_n(count+1,n);

    }
}

int main()
{
    int n;
    scanf("%d",&n);
    count_to_n(0,n);

    return 0;
}



