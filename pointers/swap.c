#include<stdio.h>
int swap(int * , int *);
int main()
{
    int x,y;
    scanf("%d %d",&x ,&y);
    printf("%d %d\n",x ,y);
    swap(&x,&y);
    printf("%d %d\n",x ,y);
    return 0;



}

int swap(int *a , int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
