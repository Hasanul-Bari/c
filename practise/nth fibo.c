#include<stdio.h>
int main()
{
    int n,i,t1,t2,temp;
    t1=0;
    t2=1;
    scanf("%d",&n);
    if(n==1)
        printf("The %dth fibonachi no is %d",n,t1);
    else if (n==2)
        printf("The %dth fibonachi no is %d",n,t2);

    else{
    for(i=2; i<n; i++)
    {

        temp=t1+t2;
        t1=t2;
        t2=temp;

    }
    printf("The %dth fibonachi no is %d",n,temp);}

    return 0;

}
