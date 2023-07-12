/* 
If the three sides of a triangle are entered through the keyboard, write a program to check whether
the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides.
input=15
15
22
output= Triangle is valid.

*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int big=a>b?(a>c?a:c):(b>c?b:c);
    if((big==a && b+c>a) || (big==b && a+c>b) || (big==c && a+b>c))
        printf("Triangle is valid.");
    else
        printf("Triangle is not valid.");
    return 0;
}