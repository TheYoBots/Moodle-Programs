/*
Write a C Program check whether a given number is Perfect number or not. 
Test Cases:
case=t1
input=
12
output=
"12 is not a Perfect Number"

case=t2
input=
28
output=
"28 is a Perfect Number"
*/
//Write your program from next line

#include<stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1; i<=n/2; i++) {
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
        printf("%d is a Perfect Number",n);
    else
        printf("%d is not a Perfect Number",n);
    return 0;
}