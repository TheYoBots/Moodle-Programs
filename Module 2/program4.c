/* Write C program to Check if two numbers in a pair are in ascending order or descending order.
Test case:
Input: 10 2
Output:
The pair is in descending order

*/

//Start writing program from next line

#include<stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("The pair is in descending order");
    else
        printf("The pair is in ascending order");
    return 0;
}