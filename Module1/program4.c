/* 
Neha is very conscious about number of hours she spent on problem solving. If she solves one problem on first day, 
on second day she solves one more than first day count and so on. Find the number of problems she solves on the nth day. 
If she takes x minutes to solve each problem, find the total hours she spent on problem solving.

Input = 7 20            //7 is nth day and 20 is x minutes to solve each problem
Output
Total Problem solved=28
Total time spent on problem solving = 9.3 hours

Input = 6 10
Output
Total Problem solved=21
Total time spent on problem solving = 3.5 hours

Input= 12 15
Total Problems solved= 78
 Total time spent on problem solving = 19.5 hours

*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int n,x;
    scanf("%d%d",&n,&x);
    printf("Total problems solved=%d\nTotal time spent on problem solving = %.1f hours",(n*(n+1))/2,((n*(n+1))/2)*x/(float)60);
    return 0;
}