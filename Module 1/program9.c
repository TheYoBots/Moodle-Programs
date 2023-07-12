/*  
From the top of a tower, an Indian army soldier sees his enemy on the ground at an angle of depression of θº in radians. 
If the tower is h feet in height, how far is the enemy from the base of the tower.

Hint: •	Convert angle to degrees in order to use inbuilt tan function available in math.h
•	tan (𝜃) = (ℎ𝑒𝑖𝑔ℎ𝑡/𝑑𝑖𝑠𝑡𝑎𝑛𝑐𝑒)

Test Case 1
case=t1
input=40 45
output= The enemy is at a distance of 53.6 feet.


*/
//Start writing program from next line

#include<stdio.h>
#include<math.h>

int main() {
    int rad,h;
    scanf("%d%d",&rad,&h);
    float deg=rad*M_PI/180;
    printf("The enemy is at a distance of %.1f feet.",h/tan(deg));
    return 0;
}