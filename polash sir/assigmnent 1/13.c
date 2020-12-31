#include<stdio.h>
int main(void)
{
    int c;
    float mm, cm, m, km;
    printf("Enter your choice-\nc=1 for millimeter\nc=2 for centimeter\nc=3 for meter\nc=4 for kilometer\n c=");
    scanf("%d", &c);

    if(c==1)
    {
        printf("Enter mm=");
        scanf("%f", &mm);
        cm=mm/10;
        m=mm/1000;
        km=mm/1000000;
        printf("cm=%f\n m=%f\n km=%f",cm, m, km);
    }

    else if(c==2)
    {
        printf("Enter cm=");
        scanf("%f", &cm);
        mm=cm*10;
        m=cm/100;
        km=cm/100000;
        printf("mm=%f\n m=%f\n km=%f",mm, m, km);
    }

    else if(c==3)
    {
        printf("Enter m=");
        scanf("%f", &m);
        mm=m*1000;
        cm=m*100;
        km=m/1000;
        printf("mm=%f\n cm=%f\n km=%f",mm, cm, km);
    }

    else
    {
        printf("Enter km=");
        scanf("%f", &km);
        mm=km*1000000;
        cm=km*100000;
        m=km*1000;
        printf("mm=%f\n cm=%f\n m=%f",mm, cm, m);
    }
    return 0;
}
