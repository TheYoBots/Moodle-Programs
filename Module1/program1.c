/* 
Any year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and ||.
input= 1992
output= 1992 is leap year

*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if((n%100==0 && n%400==0) || (n%4==0 && n%100!=0)) {
        printf("%d is a leap year",n);
    } else {
        printf("%d is not a leap year",n);
    }
    return 0;
}