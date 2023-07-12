/* 
A painter wants to paint the outer surface of an oil rectangular can. The dimensions of the can are 20cm x 15cm x 12cm(l,b,h). 
If 5 paisa is charged to paint per square centimeter, Find the cost of painting in rupees.


Test Cases:

T1 
Input= l=20, b=15, h=12
Output= painting cost = 72.00 rupees

T2
Input = l=5, b=2, h=18
Output= painting cost = 13.6 rupees


T3
l=40, b=90, h=16
Output= painting cost = 568.00 rupees


*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int l,b,h;
    scanf("%d%d%d",&l,&b,&h);
    printf("painting cost = %.1f rupees",2*(l*b+b*h+h*l)*0.05);
    return 0;
}