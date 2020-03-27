///copy a string to another without using library function
#include<stdio.h>
main()
{
    int i=0,j,k,n,n1;
    char str[100],str1[100];
    printf("enter the string:\n");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        str1[i]=str[i];
        i++;
    }
    str1[i]='\0';
  printf("%s\n",str1);

}
