#include<stdio.h>
int print(void);
int main()
{

    int a;
    a=print();
    return 0;
}

int print(void)
{
   int n,i,sum=0;
   scanf("%d",&n);
   for(i=0; i<=n; i++)
   {
       sum=sum+i;
   }
   printf("%d", sum);
   return sum;
}
