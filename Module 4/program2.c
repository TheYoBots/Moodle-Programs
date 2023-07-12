/*Read string of values into an array of pointer to strings and print them.
Note: Use dynamic memory allocation concept, after allocating and printing, deallocate the memory.

Conditions:
Maximum number of lines=10
maximum length of each string in a line is 20

The part of the code to deallocate the memory is given in the file.

Test case example:
input=5
arun kongi
griet
training
and placement
hyderabad
output=You entered 5 string values:
String 1: arun kongi

String 2: griet

String 3: training

String 4: and placement

String 5: hyderabad


*/
//write a program from next line

//deallocate the memory for each string entered

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int n;
    scanf("%d",&n);
    char *str[n];
    for(int i=0; i<n; i++) {
        str[i]=(char*)malloc(20*sizeof(char));
        scanf("\n");
        scanf("%[^\n]",str[i]);
    }
    printf("You entered %d string values:\n",n);
    for(int i=0; i<n; i++) {
        printf("String %d: %s\n",i+1,str[i]);
    }
    for(int i=0; i<n; i++) {
        free(str[i]);
    }
    return 0;
}