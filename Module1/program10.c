/*  
There is infinite line of black and white balls in alternate positions as shown below.
In 1st position there is a black ball and in 2nd position there is white ball and so on...
Given a number print the color of the ball at that position.

Test case 1
10
White Ball

Test case 1
39
Black Ball

Test case 1
17
Black Ball

Test case 1
28
White Ball

*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n%2==0)
        printf("White Ball");
    else
        printf("Black Ball");
    return 0;
}