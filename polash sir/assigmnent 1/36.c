#include<stdio.h>
#include<math.h>

int main(void)
{
    float u, v, a, s;
    printf("Enter the value of initial velocity:");
    scanf("%f", &u);
    printf("Enter the value of deceleration:");
    scanf("%f", &a);
    printf("Enter the value of final velocity:");
    scanf("%f", &v);
    s=(pow(u,2)-pow(v,2))/(2*a);
    printf("The covered distance of the particle is %.2f", s);


    return 0;


}
