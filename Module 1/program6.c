/* 
Krishna’s livelihood depends on selling milk. Every day he brings x gallons of milk from his dairy to Nizampet. 
In Nizampet, he pours 1 liter of milk to each of 36 households. Find the number of liters of milk left with him?
(HINT: 1 gallon = 3.785 liters). Assume that Krishna has adequate amount of milk.

Test Case 1
11
Amount of milk left with him = 5.63 liters

Test Case 2
10	
Amount of milk left with him = 1.85 liters

Test Case 3
12	
Amount of milk left with him = 9.42 liters


*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("Amount of milk left with him = %.2f liters",n*(float)3.785-36);
    return 0;
}