/* 
Write a Recursive c program to Find the first capital letter in a string.

Testcase example:
case=t1
input=thisisLife
output=First capital letter found: L

*/
//Start writing program from next line

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char capital(char* str)
{
    if (*str == '\0')
    {
        return 0;  
    }
    if(isupper(*str)) {
        return *str;
    } else {
        return capital(str+1);
    }
  //complete the remaining recursive code
}

int main() {
    char str[100];
    scanf("%[^\n]",str);
    if(capital(str))
        printf("First capital letter found: %c",capital(str));
    else
        printf("No capital letter found");
    return 0;
}