///power of a number
#include<stdio.h>
long power(int a,int b);
main()
{
    int a,b;
    printf("Enter the number and power of the number:\n");
    scanf("%d %d",&a,&b);
   long p=power(a,b);
    printf("The result: %ld\n",p);

}

long power(int a,int b)
{
if (b!=0) return a*power(a,b-1);
return 1;
}
