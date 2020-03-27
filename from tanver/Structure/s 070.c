///pointer closer look
#include<stdio.h>
int main()
{
    int x,y,*p,*q;
    p=&x;
    q=&y;

    x=5;
    y=7;
    printf("%d   %d    %d    %d\n",x,*p,y,*q);
p=q; /*test 1 here only the address will be changed so only *p will be changed not the variable x */
//*p=*q; /*test 2 here the variables will be changed so their address will also be changed*/
    printf("%d   %d    %d    %d",x,*p,y,*q);
    return 0;
}
