/* Enter a string (May contain spaces) and print that string in reverse order.

Test case example:
input=arun
The given string in reverse order: 
output=nura*/

#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=strlen(str)-1; i>=0; i--) {
        printf("%c",str[i]);
    }
    return 0;
}