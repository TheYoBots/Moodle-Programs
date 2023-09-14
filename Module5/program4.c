/* There is a structure called employee that holds information like employee code, name and date of joining. Write a program to
create an array of structures and enter some data into it. Then ask the user to enter current date. Display the names of those
employees whose tenure is greater than equal to 3 years.
Test cases:

*/
//write a program for next line
#include<stdio.h>
struct employee
{
int code;
char name[30];
int day;
int month;
int year;
}
emp[5]= {
{001, "Shahnawaz", 13, 1, 2006},
{004, "Amit Puri", 21, 6, 2008},
{102, "Irfan Moin", 12, 5, 2012},
{131, "Shabnam", 16, 1, 2014}
};

int main() {
    int year,month,day;
    scanf("%d%d%d",&day,&month,&year);
    printf("Employees with greater than or equal to 3 years of tenure\n");
    for(int i=0; i<4; i++) {
        if(year-emp[i].year>=3) {
            printf("\nCode : %d",emp[i].code);
            printf("\nName : %s",emp[i].name);
            printf("\nDate of joining : %d-%d-%d\n",emp[i].day,emp[i].month,emp[i].year);
        }
    }
    return 0;
}