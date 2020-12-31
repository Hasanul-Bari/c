#include<stdio.h>
void count_to_n(int , int);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    count_to_n(a,b);
    return 0;

}
void count_to_n(int count, int n)
{

    printf("%d",count);
    if(count<n)
    {
        count_to_n(count+1,n);
    }
}
