#include<stdio.h>

int main(void)
{
    int i,age , c=0;
    for(i=1; i<=100; i++ )
    {
       printf("enter the age of person %d=" ,i);
       scanf("%d" ,&age);
       if(age>=50 && age<=60)
        c=c+1;
    }
    printf("\nthe noumber of persons in the age group 50 to 60 is %d",c);

    return 0;
}

