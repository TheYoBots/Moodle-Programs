/* 
Write a C program to find the palindrome or not using recursive approach.
Testcase example:
input=MAdaM
output=The string is a palindrome.
*/

//Start writing program from next line

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int palindrome(char* str, int i, int j)
{
    //the function accepts the string, i and j values indicate start and ending characters.
    //note the function returns 1 if i value is either greater or equal to j
    //the function returns 0 if the string is not a palindrome
    if(i>=j)
        return 1;
    char ch1=tolower(str[i]);
    char ch2=tolower(str[j]);
    if(ch1!=ch2)
        return 0;
    else
        return palindrome(str, i+1, j-1);
}

int main() {
    char str[100];
    scanf("%[^\n]",str);
    int l=strlen(str);
    int isPalindrome=palindrome(str, 0, l-1);
    if(isPalindrome) {
        printf("The string is a palindrome.");
    } else {
        printf("The string is not a palindrome");
    }
    return 0;
}