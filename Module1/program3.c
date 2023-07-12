/* 
Raju started learning programming and tries to solve at least one problem on his own. 
He started solving the problem at x hrs:x1 minutes and completed it at y hrs :y1 minutes . How long did he take to solve the problem? 
(Give your answer in minutes).

Test Case1
15 10 16 05
He took 55 minutes to solve the problem.

*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int x,x1,y,y1;
    scanf("%d%d%d%d",&x,&x1,&y,&y1);
    printf("He took %d minutes to solve the problem.",(y-x)*60+(y1-x1));
    return 0;
}