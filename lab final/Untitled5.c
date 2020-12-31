#include<stdio.h>
int gcd(int x, int y);
int main()
{
    int a,b,g;

    FILE *p1,*p2;
    p1=fopen("input.txt","r");
    fscanf(p1,"%d %d",&a,&b);

    g=gcd(a,b);

    p2=fopen("output.txt","w");
    fprintf(p2,"%.d",g);

    fclose(p1);
    fclose(p2);
    return 0;
}

int gcd(int x, int y)
{
    while(x!=y)
    {
        if(x>y)
            return gcd(x-y,y);
        else
            return gcd(x,y-x);
    }
    return x;
}

