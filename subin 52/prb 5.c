#include<stdio.h>
int main()
{
   char s[4];
   int i,j,b, a,sum=0;
   scanf("%d ",&b);
   for(j=1; j<=b; j++)
   {
       gets(s);
       for(i=0; s[i]!='\0'; i++)
       {
           a=toascii(s[i]);
           sum=sum+a;
       }
        printf("%d\n",sum);
        sum=0;

   }

   return 0;


}
