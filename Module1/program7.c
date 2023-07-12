/* 
Manisha works in a supermarket in billing. A customer bought few pens and some chocolates.Each pen costs Rs. 1.5 and each chocolate costs Rs. 10.
Help Manisha to calculate the total bill amount and remaining change to be returned if the customer pays Rs. 100.

Input format: read no of pens purchased followed by number of chocolates purchased.
output condition: Remove any trailing decimal zeros in the output.
for example 65.0 should be truncated to 65 and 65.5 should be kept as it is.

10 5
output= Total bill= Rs.65
Remaining change to be returned= Rs.35

15 4
output= Total bill= Rs.62.5
Remaining change to be returned= Rs.37.5

*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("total bill= Rs.%g\nRemaining change to be returned= Rs.%g",(float)1.5*a+10*b,100-(float)1.5*a-10*b);
    return 0;
}