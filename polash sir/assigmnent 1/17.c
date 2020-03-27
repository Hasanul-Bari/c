#include<stdio.h>

int main(void)
{
    int d, y, m, r_d;
    printf("Enter the number of days: ");
    scanf("%d",&d);
    y=d/365;
    r_d=d%365;
    if(r_d!=0)
    {
        m=r_d/30;
        r_d=r_d%30;
    }
    printf("years=%d\n months=%d\n remaining days=%d", y,m,r_d);

    return 0;
}

