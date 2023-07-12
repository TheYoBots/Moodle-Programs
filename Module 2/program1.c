/* 
If the three sides of a triangle are entered through the keyboard, write a program to check whether the 
triangle is isosceles, equilateral, scalene or right angled triangle.
input= 60 60 60
output=
This is an equilateral triangle
output=

*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && c==a)
        printf("This is an equilateral triangle");
    else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
        printf("This is an right angled triangle");
    else if(a==b || b==c || c==a)
        printf("This is an isosceles triangle");
    else
        printf("This is a scalene triangle");
    return 0;
}