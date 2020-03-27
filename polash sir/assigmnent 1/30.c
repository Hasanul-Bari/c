#include<stdio.h>

int main(void)
{
    float s, t, v;
    printf("Enter the value of covered distance:");
    scanf("%f", &s);
    printf("Enter the value of given time:");
    scanf("%f", &t);
    v=s/t;
    printf("The average velocity of the particle is %.2f", v);


    return 0;


}
