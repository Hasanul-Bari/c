#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c,x1,x2,x,D;


    printf("Enter values of a, b, c of quadratic equation:\n ");
    scanf("%f%f%f", &a, &b, &c);

    D= (b * b) - (4 * a * c);

    if(D> 0)
    {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);

        printf("Two real roots exists:\nx1=%.2f and    x2=%.2f", x1, x2);
    }
    else if(D == 0)
    {
        x = -b / (2 * a);

        printf("The only one real root exists:\nx= %.2f ", x);
    }
    else
    {
       printf("There are no real roots");
    }

    return 0;
}
