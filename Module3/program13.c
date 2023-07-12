/*Write a C program to sort names in Alphabetical Order.
Use the concept of 2D array of strings to store the names.
Input format: Read how many names u want.
In the next line, Read each name one by one!!

Note: The names may contain spaces.

input=4
Virat kohli
M S dhoni
Rohit sharma
Yuvraj singh
output=
The sorted order of names are:
M S dhoni
Rohit sharma
Virat kohli
Yuvraj singh
*/

//Start your program from next line

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int n;
    char str[100][100],s[100];
    scanf("%d",&n);
    getchar();
    for(int i=0; i<n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i],"\n")]='\0';
    }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(strcmp(str[i],str[j])>0) {
                strcpy(s,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],s);
            }
        }
    }
    printf("The sorted order of names are:\n");
    for(int i=0; i<n; i++) {
        printf("%s\n",str[i]);
    }
    return 0;
}