/* 
 If a five-digit number is input through the keyboard, write a program print a new number by adding one to each of its digits.
 For example if the number that is input is 12391 then the output should be displayed as 23402.
input= 12391
output=
23502
*/
//Start writing program from next line

#include<stdio.h>
#include<string.h>

int main() {
    int n,k=0,d;
    scanf("%d",&n);
    d=n;
    while(d>0) {
        k+=1;
        d/=10;
    }
    if(k==6)
        printf("%d",n+111111);
    else
        printf("%d",n+11111);
    return 0;
}