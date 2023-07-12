 /*Recursive Digit Sum
We define super digit of an integer x using the following rules:
Given an integer, we need to find the super digit of the integer.
If x has only 1 digit, then its super digit is x.
Otherwise, the super digit of x is equal to the super digit of the sum of the digits of x.
For example, the super digit of 9875 will be calculated as:
Super_digit (9875) 9+8+7+5=29
Super_digit (29) 2+9=11
Super_digit (11) 1+1=2
Super_digit (2) =2

Testcases:
case=t1
input=4623
output=6
*/
//Write an recursive program to do the same

//given the following recursive function

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

int sum(int n)
{
    //ur code here
    //function returns an integer value to main function
    if(n<10)
        return n;
    int tot=0;
    while(n>0) {
        tot+=n%10;
        n/=10;
    }
    return sum(tot);
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}