/*
Write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight.
Test Cases:
case=t1
input
output=
12 midnight
1 AM
2 AM
3 AM
4 AM
5 AM
6 AM
7 AM
8 AM
9 AM
10 AM
11 AM
12 Noon
1 PM
2 PM
3 PM
4 PM
5 PM
6 PM
7 PM
8 PM
9 PM
10 PM
11 PM
*/
//Write your program from next line

#include<stdio.h>

int main() {
    for(int i=0; i<24; i++) {
        if(i==0) {
            printf("12 midnight\n");
        } else if(i==12) {
            printf("12 Noon\n");
        } else if(i<12) {
            printf("%d AM\n",i);
        } else {
            printf("%d PM\n",i-12);
        }
    }
}