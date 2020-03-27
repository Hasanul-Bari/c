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
    struct create_account user[100];
    int i,n;
    char passck[50];
    char sexck[50];
    printf("Enter number of employees: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("Enter employee no #%d\n",i+1);

    printf("Enter your first name:   ");
    scanf("%s",user[i].first_name);
    printf("Enter your last name:   ");
    scanf("%s",user[i].last_name);
    printf("Enter your username:   ");
    scanf("%s",user[i].user_name);
    printf("Enter your password:    ");
    scanf("%s",user[i].password);
    printf("Repeat your password:    ");
    scanf("%s",passck);
    if(strcmp(user[i].password,passck)!=0)
    {
        printf("Your entered password doesn't match :(\a\n");
        return 0;
    }
    printf("Enter your birthdate:\n");
    printf("\t Day:   ");
    scanf("%d",&user[i].birth.day);
    printf("\t Month:   ");
    scanf("%d",&user[i].birth.month);
    printf("\t Year:   ");
    scanf("%d",&user[i].birth.year);
    printf("Enter your sex (if male press m else press f):");
    scanf("%s",sexck);

    if(strcmp(sexck,"m")==0||strcmp(sexck,"M")==0)
    {
        user[i].sex.male=1;
        user[i].sex.female=0;
    }
     else  if(strcmp(sexck,"f")==0||strcmp(sexck,"F")==0)
    {
        user[i].sex.male=0;
        user[i].sex.female=1;
    }
    else
    {
        printf("You have entered wrong key :(\a\n");
        return 0;
    }
    printf("\n\n");
    }
    for(i=0;i<n;i++)
        {
            printf("Details of employee no #%d\n",i+1);
    printf("First name:%s\n ",user[i].first_name);
    printf("Last name: %s\n",user[i].last_name);
    printf("Username:%s\n",user[i].user_name);
    printf("Password: %s\n",user[i].password);
    printf("Birthdate:%d  / %d  /  %d \n",user[i].birth.day,user[i].birth.month,user[i].birth.year);
    printf("Sex: ");
    if(user[i].sex.male==1)
        printf("Male\n");
    if(user[i].sex.female==1)
        printf("Female\n");
         printf("\n\n");

    }
       printf("\nhappiness is when your program runs without any error  :)\n\a");
    return 0;

}
///updated version s 099a

