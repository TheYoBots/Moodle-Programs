/*Write a program that extracts part of the given string from the specified position. For example if the string is VIRAT KOHLI
then from position 2, extracting 4 characters would return the string as "IRAT".


CONDITIONS:
1. If the position is greater than the string length, zero or less than zero then the program should display " Can not extract substring"
2. If the number of characters to be extracted is zero or greater than the string length then the program should extract entire string from the specified position.
3. String size is maximum 100 characters. print error message as: string length exceeds 100 chracters


Input Format: Read a string with spaces 
In the next line read the position from which the string to be extracted and number of characters to be extracted from given position.

Test case example:
input=VIRAT KOHLI
2 4
Output=IRAT

Test case example:
input=VIRAT KOHLI
2 0
Output=IRAT KOHLI
*/
//Start writing your program from next line

#include<stdio.h>
#include<string.h>

int main() {
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int a,b;
    scanf("%d%d",&a,&b);
    if(strlen(str)>100) {
        printf("string length exceeds 100 chracters");
    }
    else if(a>strlen(str) || a<=0) {
        printf("Can not extract substring");
    } else if(b==0 || b>strlen(str)) {
        for(int i=a-1; i<strlen(str); i++) {
            printf("%c",str[i]);
        }
    } else {
        for(int i=a-1; i<a+b-1; i++) {
            printf("%c",str[i]);
        }
    }
    return 0;
}