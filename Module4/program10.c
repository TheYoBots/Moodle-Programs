/* 
Write a Recursive c program to Convert given decimal number to binary form.

Testcase example:
case=25
input=11001

*/
//Start writing program from next line
//use the recursive function given below and complete the code.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void decimalToBinary(int decimal)
{
    
    if (decimal == 0)
    {
        return;
    }
    //update ur code here
    decimalToBinary(decimal/2);
    printf("%d",decimal%2);
}

int main() {
    int n;
    scanf("%d",&n);
    decimalToBinary(n);
    return 0;
}