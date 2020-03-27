#include<stdio.h>
#include<math.h>
#define pi 3.14165

int main(void)
{
    float F, s, t, W;
    printf("Enter the value of force(in newton):");
    scanf("%f", &F);
    printf("Enter the value of covered distance(in meter):");
    scanf("%f", &s);
    printf("Enter angle between the force and distance(in degree):");
    scanf("%f", &t);
    W=F*s*cos((t*pi)/180);
    printf("The amount of work done is %.2f Joule", W);


    return 0;


}
