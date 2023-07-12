/*Write a program to delete all vowels from a sentence. Assume that
the sentence is not more than 80 characters long. If its more than 80 then the program should
convert first 80 characters and print.

Test cases:
input=arunkongi
Sentence after removing vowels:
output=rnkng

*/


//Start writing your program from next line

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char str[81];
    fgets(str, sizeof(str), stdin);
    printf("Sentence after removing vowels:\n");
    for(int i=0; i<strlen(str); i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            continue;
        }
        printf("%c",str[i]);
    }
    return 0;
}