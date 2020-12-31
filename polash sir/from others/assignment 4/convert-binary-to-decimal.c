///binary to decimal

#include<stdio.h>
#include<math.h>
int main()
{
    long long  n;
    int bv,dv=0,rem,base=1;
    printf("Input binary number:\n");
    scanf("%lld",&n);
    bv=n;
while(n>0){

    rem=n%10;/*here last digit will be separated*/
    dv=dv+rem*base;
    n=n/10;/*n will be updated*/
    base=base*2;/*base will be updated*/
}
printf("decimal  value= %d",dv);
return 0;
}
