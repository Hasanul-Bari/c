
///checking a number is prime or not using recursion
#include<stdio.h>
int primeno(int num, int n);
main()
{
    int num,ck;
    printf("Enter the number :\n");
    scanf("%d",&num);
    ck=primeno(num,num/2);
    if(ck==0)printf("Not Prime\n");
    else if(ck==1)printf("Prime\n");

}
int primeno(int num, int n)
{
    if(n==1)return 1;
    else
    {
        if(num%n==0)return 0;
        else return primeno(num,n-1);
    }
}
