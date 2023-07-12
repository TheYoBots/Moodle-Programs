/* 
1.	A Utopian tree sapling with a height of 1 inch is planted on day1. The tree grows 2 inches every day. 
Find the height of the tree in centimeters on nth day. (HINT: 1 inch= 2.54 centimeters)


Test Cases:

T1 
Input=5
Output= The height of the tree on 5th day = 22.86 cms

T2
Input = 6
Output= The height of the tree on 6th day = 27.94 cms

T3
Input=7
Output= The height of the tree on 7th day= 33.02 cms


*/
//Start writing program from next line

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf(" The height of the tree on %dth day = %.2f cms",n,(n-1)*(float)2.54*2+(float)2.54);
    return 0;
}