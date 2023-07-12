/*A Credit Card number is usually a 16-digit number. A valid Credit Card number would satisfy a rule explained below with the help of a
dummy Credit Card number—4567 1234 5678 9129. Start with the leftmost digit and multiply every other digit by 2.
4 5 6 7 1 2 3 4 5 6 7 8 9 1 2 9

8 12 2 6 10 14 18 4
From above array, Then subtract 9 from any number larger than or equal to 10. 
Thus we get:
8 3 2 6 1 5 9 4
Add above all to get 38.
Add all the other digits in the original credit card number which you didn't multiply by 2 to get 42.

Sum of 38 and 42 is 80. Since 80 is divisible by 10, the Credit Card number is valid.

Write a program that receives a Credit Card number and checks using the above rule whether the Credit Card number is valid.

Input Format: Read credit card number without spaces.

Test cases:
case=t1
input=4567123456789129
output=
Credit Card Number is valid

*/


//Start writing your program from next line

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char str[100];
    int s1=0;
    scanf("%s",str);
    for(int i=0; i<16; i++) {
        str[i]-='0';
        if(i%2==0) {
            str[i]=str[i]*2;
            if(str[i]>=10) {
                str[i]-=9;
            }
            s1+=str[i];
        } else {
            s1+=str[i];
        }
    }
    if(s1%10==0) {
        printf("Credit Card Number is valid");
    } else {
        printf("Credit Card Number is not valid");
    }
    return 0;
}