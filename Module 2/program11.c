/*
Write a program to generate all Pythogorean Triplets with side length less than or equal to 30.
Test Cases:
case=t1
input=
output=
(3, 4, 5)
(4, 3, 5)
(5, 12, 13)
(6, 8, 10)
(7, 24, 25)
(8, 6, 10)
(8, 15, 17)
(9, 12, 15)
(10, 24, 26)
(12, 5, 13)
(12, 9, 15)
(12, 16, 20)
(15, 8, 17)
(15, 20, 25)
(16, 12, 20)
(16, 30, 34)
(18, 24, 30)
(20, 15, 25)
(20, 21, 29)
(21, 20, 29)
(21, 28, 35)
(24, 7, 25)
(24, 10, 26)
(24, 18, 30)
(28, 21, 35)
(30, 16, 34)

*/
//Write your program from next line

#include<stdio.h>

int main() {
    for(int i=3; i<=30; i++) {
        for(int j=3; j<=30; j++) {
            for(int k=5; k<=35; k++) {
                if(i*i+j*j==k*k) {
                    printf("\(%d, %d, %d\)\n",i,j,k);
                }
            }
        }
    }
    return 0;
}