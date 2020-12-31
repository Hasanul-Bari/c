///a program  to decide whether a character array is alphabetically smaller than other

#include<stdio.h>
#include<string.h>

int main()
{
    int ck;
    char arr[100],arr1[100];

    gets(arr);
    gets(arr1);
    ck=strcmp(arr,arr1);
    if(strlen(arr)>strlen(arr1)){
    printf("The second character array is alphabetically smaller\n");

    }
       else if(strlen(arr)<strlen(arr1)){
    printf("The first character array is alphabetically smaller\n");

    }
   else if(ck==0){
        printf("The character array are same alphabetically.\n");

    }
    else if(ck==-1)
    printf("The first character array is smaller than the second one.\n");
    else
        printf("The second character array is smaller than the first one.\n");

return 0;

}


