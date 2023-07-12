/* 
 A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through 
the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.
input=896
output=
note of 100 : 8
note of  50 : 1
note of  10: 4
note of remaining: 6

*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("note of 100 : %d",n/100);
    printf("\nnote of 50 : %d",(n%100)/50);
    printf("\nnote of 10: %d",((n%100)%50)/10);
    printf("\nnote of remaining: %d",((n%100)%50)%10);
    return 0;
}