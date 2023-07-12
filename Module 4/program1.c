/* Create a function called getint(), which would receive a numeric string
from the keyboard, convert it to an integer number and return the
integer to the calling function main. 

Conditions: string length: 0<n<=10  if user enter more than 10 characters,
take the first 10 characters and convert to an integer number.

Testcases:
input=
12345
output=
Number: 12345

*/
//write a program from next line

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int getint(char *str)
{
    //your code here
    return atoi(str);
}

int main() {
    char str[10];
    scanf("%s",str);
    printf("Number: %d",getint(str));
    return 0;
}