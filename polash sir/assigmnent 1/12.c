#include<stdio.h>
int main(void)
{
    float inch,feet;
    printf("Enter the height of an object in inch:");
    scanf("%f",&inch);
    feet=inch/12;
    printf("The height of the object is %0.3f feet",feet);
    return 0;
}
