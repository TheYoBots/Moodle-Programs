/*Write a program to count the number of occurrences of any two vowels in succession in a line of text. 
For example, in the following sentence:
“Please read this application and give me gratuity”
such occurrences are ea, ea, ui.

Test case example:
input=Please read this application and give me gratuity
output=Vowels in succession are: ea ea io ui 
Total number of vowels in successions are : 4

*/


//Start writing your program from next line

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

bool isvowel(char ch) {
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        return true;
    else
        return false;
}

int main() {
    int k=0;
    char str[100];
    fgets(str, sizeof(str), stdin);
    for(int i=0; i<strlen(str); i++) {
        if(isvowel(str[i]) && isvowel(str[i+1])) {
            k+=1;
            if(k==1)
                printf("Vowels in succession are: ");
            printf("%c%c ",str[i],str[i+1]);
            i+=1;
        }
    }
    if(k==0)
        printf("No vowels in succession");
    printf("\nTotal number of vowels in successions are : %d",k);
    return 0;
}