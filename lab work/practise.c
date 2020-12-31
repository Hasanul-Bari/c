#include<stdio.h>
#include<string.h>
#include<math.h>

#define MX 10

int id[MX];
double mark[MX];
char grade[MX][MX];

void Grade(double m, int index){

    if(m>=80.0 && m<=100.0)    strcpy(grade[index], "A+");
    else if(m>=75.0 && m<80.0) strcpy(grade[index], "A");
    else if(m>=70.0 && m<75.0) strcpy(grade[index], "A-");
    else if(m>=65.0 && m<70.0) strcpy(grade[index], "B+");
    else if(m>=60.0 && m<65.0) strcpy(grade[index], "B");
    else if(m>=55.0 && m<60.0) strcpy(grade[index], "B-");
    else if(m>=50.0 && m<55.0) strcpy(grade[index], "C");
    else if(m>=45.0 && m<50.0) strcpy(grade[index], "C-");
    else if(m>=40.0 && m<45.0) strcpy(grade[index], "D");
    else                       strcpy(grade[index], "F");

}

int main()
{
    int i;
    printf("Enter 10 id number and it's obtained marks(float numbers are allowed) respectively:\n");

    for(i=0; i<MX; i++) scanf("%d %lf", &id[i], &mark[i]);

    for(i=0; i<MX; i++) Grade(mark[i], i);

    printf("\nPrinting the obtained marks of the odd ID's:\n");
    for(i=0; i<MX; i++) if(id[i]%2 == 1) printf("ID: %d   Grade: %s\n", id[i], grade[i]);

    printf("\nPrinting the obtained marks of the even ID's:\n");
    for(i=0; i<MX; i++) if(id[i]%2 == 0) printf("ID: %d   Grade: %s\n", id[i], grade[i]);


    printf("Enter which grade you want to search: ");
    char str[MX]; scanf("%s", str);

    printf("\nPrinting student ID's who obtained grade %s:\n", str);
    for(i=0; i<MX; i++) if(!strcmp(grade[i], str)) printf("%d\n", id[i]);


    return 0;
}
