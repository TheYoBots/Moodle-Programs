/*Given a square matrix, calculate the absolute difference between the sums of its diagonals.
first input requires size of matrix and user will provide matrice elements.
For example, the square matrix arr is shown below:
input=3
1 2 3
4 5 6
9 8 9 
output=Absolute difference of Left and Right diagonal is |15-17| = 2

The left-to-right diagonal = 1 + 5 + 9 = 15. The right to left diagonal = 3 + 5 + 9 = 17. 
Their absolute difference is |15-17| = 2
*/
//Write your program from next line

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int n,a[10][10],s1=0,s2=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
            if(i==j) {
                s1=s1+a[i][j];
            }
            if(i+j==n-1) {
                s2=s2+a[i][j];
            }
        }
    }
    printf("Absolute difference of Left and Right diagonal is |%d-%d| = %d",s1,s2,abs(s1-s2));
    return 0;
}