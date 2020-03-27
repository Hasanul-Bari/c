#include<stdio.h>

#include<math.h>
void main()
{
         int i,Count;

         Count=0;
        for(i=1;i<=100;i++)
        {
            if((i%2)!=0 && (i%3)!=0)
            {
                Count=Count+1;
                 printf("%d",i);
            }
            printf("%d\n",Count);


        }



}
