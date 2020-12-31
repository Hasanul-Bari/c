#include<stdio.h>

int main(void)
{
    float u, a, t, v;
    printf("Enter the value of initial velocity:");
    scanf("%f", &u);
    printf("Enter the value of acceleration:");
    scanf("%f", &a);
    printf("Enter the value of time:");
    scanf("%f", &t);
    v=u+(a*t);
    printf("The final velocity of the particle is %.2f", v);


    return 0;


}
