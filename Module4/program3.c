/* Write a program using pointers to find the smallest number in an array of 10 integers.
Input format: enter the  number of elements in array in the first line
in the next line enter the array elements.
Test case example:
input=10
5 8 9 5 15 2 1 3 7 11 
output=The smallest number is: 1
*/
//write the program from next line 

#include<stdio.h>

int findSmallest(int *a, int n) {
    int min=*a;
    for(int i=0; i<n; i++) {
        if(*(a+i)<min)
            min=*(a+i);
    }
    return min;
}

int main() {
    int n,a[100];
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    printf("%d",findSmallest(a, n));
    return 0;
}