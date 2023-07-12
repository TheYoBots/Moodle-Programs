/*
Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.
Test Cases:
case=t1
input=5
2
-3
-9
1
4

output=Positive Numbers: 3
Negative Numbers: 2
Number of zero: 0
*/
//Write your program from next line

#include<stdio.h>

int main() {
    int n,a[100],k0=0,kp=0,kn=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if(a[i]==0)
            k0+=1;
        else if(a[i]>0)
            kp+=1;
        else
            kn+=1;
    }
    printf("Positive Numbers: %d\nNegative Numbers: %d\nNumber of zero: %d",kp,kn,k0);
    return 0;
}