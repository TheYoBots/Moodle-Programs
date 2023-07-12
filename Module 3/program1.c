/* If an array arr contains n elements, then write a program to check if arr[ 0 ] = arr[ n-1 ], arr[ 1 ] = arr[ n - 2 ] and so on.
Test cases:
input=6
22
32
42
52
32
22
output=
a[0] & a[5] are equal
a[1] & a[4] are equal
a[2] & a[3] are not equal

*/
//write the program from next line 

#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0,j=n-1; i<j; i++,j--)
    {
        if(a[i]==a[j]) {
            printf("a[%d] & a[%d] are equal\n",i,j);
        } else {
            printf("a[%d] & a[%d] are not equal\n",i,j);
        }
    }
}