/*In a numbering game few numbers are categorized as few specifications as mentioned below. Joy is trying to pick a number 
and find out what kind of specification does the number belong to. Help Joy to identify the specification whenever he chooses
a number. Here are the specifications.
•	If n is odd, print Weird
•	If n is even and in the inclusive range of 2 to 5, print Not Weird
•	If n is even and in the inclusive range of 6 to 20, print Weird
•	If n is even and greater than 20, print Not Weird


Testcase example:
case=t1
input=24
output=Not Weired


*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n%2!=0)
        printf("Wierd");
    else if(n%2==0) {
        if(n>=2 && n<=5)
            printf("Not Wierd");
        else if(n>=6 && n<=20)
            printf("Wierd");
        else if(n>20)
            printf("Not Wierd");
    }
    return 0;
}