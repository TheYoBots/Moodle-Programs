/* 
If no prime factor divides a number more than once, it is said to be Square-Free; that is, the maximum power of a prime factor that divides n is one.
1, 2, 3, 5, 6, 7, 11, 13, 14, 15, 17, 19 etc.. are some square-free numbers.
Write a C program to print first 10 square free numbers.
input= 10
output=1 2 3 5 6 7 10 11 13 14
*/
//Start writing program from next line

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isSqFree(int n) {
    if(n%2==0) {
        n/=2;
        if(n%2==0)
            return false;
    }
    for(int i=3; i<=sqrt(n); i+=2) {
        if(n%i==0) {
            n/=i;
            if(n%i==0)
                return false;
        }
    }
    return true;
}

int main() {
    int n,k=1,i=0;
    scanf("%d",&n);
    while(i<10) {
        if(isSqFree(k)) {
            printf("%d ",k);
            k+=1;
            i+=1;
        } else {
            k+=1;
        }
    }
    return 0;
}