#include<stdio.h>
int main(void)
{
    int c;
    float mg, g, kg;
    printf("Enter your choice-\nc=1 for milligram\nc=2 for gram\nc=3 for kilogram\n c=");
    scanf("%d", &c);

    if(c==1)
    {
        printf("Enter mg=");
        scanf("%f", &mg);
        g=mg/1000;
        kg=mg/1000000;
        printf("g=%f\n kg=%f",g, kg);
    }

    else if(c==2)
    {
        printf("Enter gram=");
        scanf("%f", &g);
        mg=g*1000;
        kg=g/1000;
        printf("mg=%f\n kg=%f",mg, kg);
    }
    else
    {
        printf("Enter kg=");
        scanf("%f", &kg);
        mg=kg*1000000;
        g=kg*1000;
        printf("mg=%f\n g=%f",mg, g);
    }


    return 0;
}
