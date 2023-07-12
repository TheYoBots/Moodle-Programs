/*
Write a program to calculate overtime pay of 5 employees. Overtime is paid at the rate of Rs. 12.00 per hour 
for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.
If user enters more than 5 employees display "Employee limit exceeded"
Test Cases:
case=t1
input=32
23
45
50
41
output=You have to work for more than 40 hours to get over time pay
You have to work for more than 40 hours to get over time pay
Employee No 3 overtime pay is 60.00
Employee No 4 overtime pay is 120.00
Employee No 5 overtime pay is 12.00

*/
//Write your program from next line

#include<stdio.h>

int main() {
    int a[5];
    for(int i=0; i<5; i++) {
        scanf("%d",&a[i]);
        if(a[i]<=40)
            printf("You have to work for more than 40 hours to get over time pay\n");
        else if(a[i]>40)
            printf("Employee No %d overtime pay is %.2f\n",i+1,(a[i]-40)*(float)12);
    }
    return 0;
}