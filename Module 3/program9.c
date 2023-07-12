/*To uniquely identify a book a 10-digit ISBN (International Standard Book Number) is used. The rightmost digit is a checksum digit. This
digit is determined from the other 9 digits using the condition that d1 + 2d2 + 3d3 + ... + 10d10 must be a multiple of 11 (where di
denotes the ith digit from the right). The checksum digit d1 can be any value from 0 to 10: the ISBN convention is to use the value X to
denote 10. Write a program that receives a 10-digit integer,computes the checksum, and reports whether the ISBN number is correct or not.

If the input length is greater than 10 print "Invalid ISBN"

Test cases:
case=t1
input=007462542X
output=
Valid ISBN

case=t2
input=0112112425
output=
Invalid ISBN


*/


//Start writing your program from next line

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int sum=0;
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0; i<strlen(str)-1; i++) {
        switch(str[i]) {
            case 'X': sum+=10*(i+1); break;
            case '1': sum+=1*(i+1); break;
            case '2': sum+=2*(i+1); break;
            case '3': sum+=3*(i+1); break;
            case '4': sum+=4*(i+1); break;
            case '5': sum+=5*(i+1); break;
            case '6': sum+=6*(i+1); break;
            case '7': sum+=7*(i+1); break;
            case '8': sum+=8*(i+1); break;
            case '9': sum+=9*(i+1);
        }
    }
    if(sum%11==0)
        printf("Valid ISBN");
    else
        printf("Invalid ISBN");
    return 0;
}