/* Write a C program to set the lower triangle of a given square matrix to zero.

Constraints:nXn square matrix. maximum possible size of n is 10.
if n value is greater than 10. then just exit the code with exit value as 5 without printing anything"
Note: ignore the message output is not defined in this particular constraint.

Example:
input=3
1 2 3
4 5 6
7 8 9
output=
   1    2    3 
   0    5    6 
   0    0    9 
*/

//Start writing your program from next line

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int n,a[10][10];
    scanf("%d",&n);
    if(n>10)
        exit(5);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i<=j)
                printf("%4d",a[i][j]);
            else
                printf("%4d",0);
        }
        printf("\n");
    }
}