/* Enter a String of characters with spaces, and replace each character
with next possible character in the order using pointers.

Use the given function which accepts a character pointer. 

If the string length is more than 100 characters print error message as follows:
"string length exceeds 100 chracters"

Test case example:
case=t1
input=ARSENAL
output=BSTFOBM

*/
//write a program from next line

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void nextchar(char *a) 
{
    while (*a != '\0')
    {
        //update ur code here
        *a+=1;
        printf("%c",*a);
        a++;
    }
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    if(strlen(str)>100) {
        printf("string length exceeds 100 chracters");
        return 0;
    }
    nextchar(str);
    return 0;
}