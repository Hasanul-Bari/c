#include<stdio.h>
void print(void);
int main()
{
    print();
    return 0;
}

void print(void)
{
   int n,i,sum=0;
   scanf("%d",&n);
   for(i=0; i<=n; i++)
   {
       sum=sum+i;
   }
   printf("%d", sum);
}

