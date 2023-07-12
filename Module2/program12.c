/*
Population of a town today is 100000. The population has increased steadily at the rate of 10 % per year for last 10 years.
Write a program to determine the population at the end of each year in the last decade.
Test Cases:
case=t1
input=
output=
1 year: 90000
2 year: 81000
3 year: 72900
4 year: 65610
5 year: 59049
6 year: 53144
7 year: 47829
8 year: 43046
9 year: 38742
10 year: 34867
*/
//Write your program from next line

#include<stdio.h>
#include<math.h>

int main() {
    float sum=100000;
    for(int i=0; i<10; i++) {
        sum=sum-(10*sum/(float)100);
        printf("%d year: %d\n",i+1,(int)sum);
    }
    return 0;
}