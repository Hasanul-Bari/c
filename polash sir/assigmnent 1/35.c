#include<stdio.h>

int main(void)
{
    float u, a, t, s;
    printf("Enter the value of initial velocity:");
    scanf("%f", &u);
    printf("Enter the value of deceleration:");
    scanf("%f", &a);
    printf("Enter the value of time:");
    scanf("%f", &t);
    s=(u*t)-((a*t*t)/2);
    printf("The covered distance of the particle is %.2f", s);


    return 0;


}
