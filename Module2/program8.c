/*
Write a program to find the range of a set of numbers entered through the keyboard.
Range is the difference between the smallest and biggest number in the list.

Read n value from user
Test Cases:
case=t1
input=2
15
3
output=12 is the range of the data

*/
//Write your program from next line

#include<stdio.h>

int main() {
    int n,a[100],min,max;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if(i==0) {
            min=a[0];
            max=a[0];
        }
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }
    printf("%d is the range of the data",max-min);
    return 0;
}