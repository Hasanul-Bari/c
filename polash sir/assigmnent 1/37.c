#include<stdio.h>

int main(void)
{
    float m, a, F;
    printf("Enter the value of mass(in kg):");
    scanf("%f", &m);
    printf("Enter the value of acceleration:");
    scanf("%f", &a);
    F=m*a;
    printf("The force on the particle is %.2f newton", F);


    return 0;


}
