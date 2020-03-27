#include<stdio.h>
#include<math.h>
int main(void)

{
    int ab,bc,cd,ad;
    float ae,ed;
    while(scanf(ab,bc,cd,ad)&&ab!=0&&bc!=0&&cd!=0&&ad!=0)
    {
        scanf("%d%d%d%d",&ab,&bc,&cd,&ad);


                ae=(ab-cd)/2;
                ed=sqrt(ad*ad-ae*ae);
                printf("%f",ed);



    }
    return 0;

}
