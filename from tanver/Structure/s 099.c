///nested structure [complete profile]
#include<stdio.h>
struct create_account
{
    char first_name[50];
    char last_name[50];
    char user_name[50];
    char password[50];
    struct birthday
    {
        int day;
        int month;
        int year;
    } birth;
    struct Sex
    {
        int male;
        int female;
    } sex;
};
int  main()
{
    struct create_account user;
    char passck[50];
    char sexck[50];
    printf("Enter your first name:   ");
    scanf("%s",user.first_name);
    printf("Enter your last name:   ");
    scanf("%s",user.last_name);
    printf("Enter your username:   ");
    scanf("%s",user.user_name);
    printf("Enter your password:    ");
    scanf("%s",user.password);
    printf("Repeat your password:    ");
    scanf("%s",passck);
    if(strcmp(user.password,passck)!=0)
    {
        printf("Your entered password doesn't match :(\a\n");
        return 0;
    }
    printf("Enter your birthdate:\n");
    printf("\t Day:   ");
    scanf("%d",&user.birth.day);
    printf("\t Month:   ");
    scanf("%d",&user.birth.month);
    printf("\t Year:   ");
    scanf("%d",&user.birth.year);
    printf("Enter your sex (if male press m else press f):");
    scanf("%s",sexck);

    if(strcmp(sexck,"m")==0||strcmp(sexck,"M")==0)
    {
        user.sex.male=1;
        user.sex.female=0;
    }
     else  if(strcmp(sexck,"f")==0||strcmp(sexck,"F")==0)
    {
        user.sex.male=0;
        user.sex.female=1;
    }
    else
    {
        printf("You have entered wrong key :(\a\n");
        return 0;
    }
    printf("First name:%s\n ",user.first_name);
    printf("Last name: %s\n",user.last_name);
    printf("Username:%s\n",user.user_name);
    printf("Password: %s\n",user.password);
    printf("Birthdate:%d  / %d  /  %d \n",user.birth.day,user.birth.month,user.birth.year);
    printf("Sex: ");
    if(user.sex.male==1)
        printf("Male\n");
    if(user.sex.female==1)
        printf("Female\n");
    printf("\nhappiness is when your program runs without any error  :)\n\a");
    return 0;
}
