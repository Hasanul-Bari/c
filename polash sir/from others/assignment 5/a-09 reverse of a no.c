///find the reverse of a number using recursion
#include<stdio.h>
int rev(int n, int len);
main()
{
    int n,len=0;
    scanf("%d",&n);
    int temp=n;
    while(temp!=0){
        len++;
        temp=temp/10;
    }
    printf("Reverse %d\n",rev(n,len));
}
int rev(int n, int len)
{
    if(len==1)return n;
    else{

        return(((n%10)*pow(10,len-1))+rev(n/10,--len));
    }
}
