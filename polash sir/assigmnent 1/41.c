#include<stdio.h>


int main(void)
{
    float X, T, P;
    printf("Enter the value of work-done(in joule):");
    scanf("%f", &X);
    printf("Enter the value of time(in minute):");
    scanf("%f", &T);
    P=X/(T*746*60);
    printf("The value of power is %.2f horse-power", P);


    return 0;


}
