#include<stdio.h>
int main()
{
    float i,f;
    int j,n;
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        scanf("%f",&i);

        f=i/12.0;


        printf("%.2f\n",f);


    }

    return 0;
}
