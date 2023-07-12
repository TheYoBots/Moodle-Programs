/* 
Write a C program to Reverse String using Recursion and Pointer.
  
Testcase example:

input=griet college
output=egelloc teirg

*/
//Start writing program from next line

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* ReverseOfString(char* str)
{
    //update your code here
    char *revstr=(char *)malloc(strlen(str)+1);
    if(*str) {
        revstr=ReverseOfString(str+1);
        strncat(revstr, str, 1);
    }
    return revstr;
}

int main() {
    char str[100];
    scanf("%[^\n]",str);
    printf("%s",ReverseOfString(str));
    return 0;
}