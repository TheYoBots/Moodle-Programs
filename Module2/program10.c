/*
Write a C program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows: 
  There are 21 matchsticks.
– The computer asks the player to pick 1, 2, 3 or 4 matchsticks. (if user picks any other number apart from 4 print error message)
– After the person picks, the computer does its picking.
– Whoever is forced to pick up the last matchstick loses the game.

Test Cases:
case=t1
input=4
7
2
5
1
3
output=Number of matches left = 17
out of which computer picked up 1
enter the choice between 1 to 4
Number of matches left = 14
out of which computer picked up 3
enter the choice between 1 to 4
Number of matches left = 10
out of which computer picked up 4
Number of matches left = 3
out of which computer picked up 2
Number of matches left = 1
You lost the Game



*/
//Write your program from next line

#include<stdio.h>

int main() {
    int n,sum=21,c,k=0;
    while(1) {
        scanf("%d",&n);
        if(n>4 || n<1) {
            continue;
        }
        sum-=n;
        printf("Number of matches left = %d\n",sum);
        switch(n) {
            case 1: c=4; break;
            case 2: c=3; break;
            case 3: c=2; break;
            case 4: c=1; break;
        }
        printf("out of which computer picked up %d\n",c);
        sum-=c;
        if(sum==1) {
            printf("Number of matches left = %d\n",sum);
            printf("You lost the Game");
            break;
        }
        if(k<2 && n!=3) {
            printf("enter the choice between 1 to 4\n");
            k+=1;
        }
        if(n==3)
            k+=1;
    }
    return 0;
}