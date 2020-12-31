///lcm gcd hcf all in one

#include <stdio.h>

long gcd(long, long);

int main()
{
    long x, y, hcf, lcm;

    printf("Enter two integers\n");
    scanf("%ld%ld", &x, &y);

    hcf = gcd(x, y);
    lcm = (x*y)/hcf;

    printf("Highest Common Factor of %ld and %ld = %ld\n", x, y, hcf);
    printf("Least Common Multiple of %ld and %ld = %ld\n", x, y, lcm);

    return 0;
}

long gcd(long a, long b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
