/* 
 Add Two Numbers Without Using the Arithmetic operators
input=4
5
output=9
*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    while(b--) {
        a++;
    }
    printf("%d",a);
    return 0;
}