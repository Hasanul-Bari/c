#include <stdio.h>

int fact(int num);

int main()
{
    int num,factorial;
    printf("Enter any number: ");
    scanf("%d", &num);

    factorial = fact(num);

    printf("Factorial of %d is %d", num, factorial);

    return 0;
}

int fact(int num)
{
    int fac;
    if(num == 0)
        return 1;
    else{
        fac= num * fact(num - 1);
        return (fac);}
}
