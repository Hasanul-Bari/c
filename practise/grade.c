#include<stdio.h>
int main(void)
{
    int x;
    printf("Enter obtained marks:");
    scanf("%d", &x);

    if(x>=80 && x<100)
    {
        printf("4.00");
    }
    else if(x>=75 && x<80)
    {
        printf("3.75");
    }
     else if(x>=70 && x<75)
    {
        printf("3.5");
    }
     else if(x>=65 && x<70)
    {
        printf("3.25");
    }
     else if(x>=60 && x<65)
    {
        printf("3.00");
    }
     else if(x>=55 && x<60)
    {
        printf("2.75");
    }
     else if(x>=50 && x<55)
    {
        printf("2.5");
    }
     else if(x>=45 && x<50)
    {
        printf("2.25");
    }
     else if(x>=40 && x<45)
    {
        printf("2.00");
    }
     else if(x<40)
    {
        printf("FAIL");
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}
