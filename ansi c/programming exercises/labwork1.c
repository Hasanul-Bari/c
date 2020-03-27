#include<stdio.h>
int main()
{
    int studentid[10], marks[10],i;
    float grade;
    for(i=1 ; i<=10; i++)
    {
        scanf("%d ",&studentid[i]);
    }

    for(i=1 ; i<=10; i++)
    {
         scanf("%d ",&marks[i]);

         if(marks[i]>=80 && marks[i]<100)
         {
             grade=5.00;
         }
        else if(marks[i]>=70 && marks[i]<80)
         {
              grade=4.50;
         }
        else if(marks[i]>=60 && marks[i]<70)
        {
           grade=4.00;
        }
        else if(marks[i]>=50 && marks[i]<60)
       {
           grade=3.50;
       }
       else if(marks[i]>=40 && marks[i]<50)
       {
            grade=3.00;
       }
       else if(marks[i]>=33 && marks[i]<40)
      {
            grade=2.00;
      }
      else
      {
           grade=0.00;
      }
       printf("%d    %.2f\n ", studentid[i], grade);
   }




}

