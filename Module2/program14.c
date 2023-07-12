/* 
Write a  program to read a password until it is valid. 
print "Correct password" and quit the program. The correct password is 1234.
input= 1234
output=
Correct password
*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    /*while(n!=1234) {
        scanf("%d",&n);
    }*/
    if(n==1234)
    printf("Correct password");
    return 0;
}