/* Write a function that compares two given dates. To store a date use a structure that contains three members namely day, month and
year. If the dates are equal the function should return 0, otherwise it should return 1.
Test cases:
case=t1
input=
25-12-2013
25-12-2013
output=
The dates are same

case=t2
input=
25-12-2013
11-01-2018
output=
The dates are not same

*/
//write a program for next line

#include<stdio.h>
#include<string.h>

struct Dates {
    char date[10];
} dates[10];

int main() {
    char str[100];
    scanf("%s%s",str,dates[0].date);
    if(strcmp(dates[0].date, str)==0) {
        printf("The dates are same");
    } else {
        printf("The dates are not same");
    }
    return 0;
}