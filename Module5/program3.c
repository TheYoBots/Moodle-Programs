/* Given a structure of cricketers, store the average runs, name of the player and number of matches played in that order.
Create an array of structures to hold records of at max 3 such cricketers and then write a program to read these records
and arrange them in ascending order by average runs. You can use the qsort() standard library function to do the same. 

Input format: enter avgruns, name of player and number of matches played on same line for each player.

Test case example:
case=t1
input=
68 kohli 200
56 dhoni 250
48 rohit 150
output=
Name: rohit
Total Matches played: 150
Average Runs: 48

Name: dhoni
Total Matches played: 250
Average Runs: 56

Name: kohli
Total Matches played: 200
Average Runs: 68

*/
//write a program for next line

#include<stdio.h>
#include<stdlib.h>
#define Max 3

int cmpfunc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

struct cricketers
{
    int avgruns;
    char name[30];
    int totmatches;
}india[Max];

int main() {
    for(int i=0; i<Max; i++) {
        scanf("%d %s %d",&india[i].avgruns,india[i].name,&india[i].totmatches);
    }
    qsort(india, Max, sizeof(struct cricketers), cmpfunc);
    for(int i=0; i<Max; i++) {
        printf("\nName: %s\nTotal Matches played: %d\nAverage Runs: %d\n",india[i].name,india[i].totmatches, india[i].avgruns);
    }
    return 0;
}