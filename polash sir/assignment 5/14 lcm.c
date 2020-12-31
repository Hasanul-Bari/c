#include<stdio.h>
int lcm(int x, int y);
int main()
{
    int a,b,l;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);
    l=lcm(a,b);
    printf("The lcm is %d", l);
    return 0;
}
int lcm(int x, int y)
{
    static int c=1;
    if(c%x==0 && c%y==0)
    {
        return c;
    }
    c++;
    lcm(x,y);
    return c;

}
