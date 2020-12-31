#include<stdio.h>
#define period 10
#define principle 5000.00


int main ()
{
    int year;
    float amount, value, inrate;

    amount= principle;
    inrate= 0.11;
    year= 0;

     while(year<=period)
     {
         printf("%2d      %0.2f\n", year, amount);
         value=amount+inrate*amount;
         year=year+1;
         amount=value;
     }


    return 0;

}
