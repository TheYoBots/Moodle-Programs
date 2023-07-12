/* In a given integer N, check whether the kth bit is set or not. 
Print "true" if kth bit is set in the given integer N, "false" otherwise.

Input Format: Enter the number n and integer k

Test case example:

input=10 1
output=true

Explaination: 10 in binary is 1010, k=1, which means 1st bit is set(left to right)

input=10 2
output=false

Explaination: 10 in binary is 1010, k=2 which means 2nd bit is not set.. So false.

Note: Use the given function format!!

*/
//write a program from next line

#include<stdio.h>

void bitsetornot(int n, int k)
{
    //update your code here
    if(n & 1<<k)
        printf("true");
    else
        printf("false");
    
}

int main()
{
    
     //update code here
    int n,k;
    scanf("%d%d",&n,&k);
    bitsetornot(n,k);
    return 0;
}