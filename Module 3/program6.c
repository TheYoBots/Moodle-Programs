/*Write a  c program that converts a string like "07071990"  to an integer "07071990" 
if not able to convert the program should return 0 and print

Test case example:
input=455656767
output=455656767
*/


//Start writing your program from next line

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    printf("%d",atoi(str));
    return 0;
}