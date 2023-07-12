/*There are n houses built in a line, each of which contains some cash in it.
A thief is going to steal the maximal cash of these houses,
but he can't steal in two adjacent houses because the owner of the stolen houses will tell his two neighbours left and right side.
Find the maximum stolen value?
Input format:
-----------------
First an integer n, denoting how many houses are there.
Then n space separated integers denoting the cash for the n houses.
Output Format:
An integer denoting the maximum value possible to steal. 

Test case example:
INPUT=7
5 2 4 10 45 100 300
OUTPUT=354

//Start writing your program from next line */

#include<stdio.h>

int main() {
    int n,a[100],odd=0,eve=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if(i%2==0) {
            odd=odd+a[i];
        }
        else {
            eve=eve+a[i];
        }
    }
    if(odd>eve)
        printf("%d",odd);
    else
        printf("%d",eve);
    return 0;
}