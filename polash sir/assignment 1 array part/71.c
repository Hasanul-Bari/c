#include<stdio.h>
int main()
{
    int n,i,a,s=0;
    printf("Enter a no:\n");
    scanf("%d",&n);

    a=n;

    while(a!=0)
    {
        s=s*10;
        s=s+(a%10);
        a=a/10;
    }

    if(n==s)
        printf("%d is palindrome\n",n);
    else
        printf("%d is  not palindrome\n",n);

    return 0;
}
