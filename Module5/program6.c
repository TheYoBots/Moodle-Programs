/* There are three players from which the Most Valuable Player (MVP) is to be chosen. Each player is to be judged by 3 judges, who would
assign a rank to each player. The player whose sum of ranks is highest is chosen as MVP. Write a program to implement this scheme.
Test cases:

input=
virat kohli
5
7
9
m s dhoni
8
8
8
rohit sharma
8
3
5
output=m s dhoni is chosen as MVP of the season

*/
//write a program for next line

#include<stdio.h>

struct MVP {
    char name[20];
    int r1;
    int r2;
    int r3;
} MVP[4];

int main() {
    int r1,r2,r3,t,max,sum[3];
    char name[20];
    for(int i=0; i<3; i++) {
        scanf(" %[^\n]",MVP[i].name);
        scanf("%d%d%d",&MVP[i].r1,&MVP[i].r2,&MVP[i].r3);
        sum[i]=MVP[i].r1+MVP[i].r2+MVP[i].r3;
        max=sum[0];
        if(sum[i]>max)
        {
            max=sum[i];
            t=i;
        }
    }
    printf("%s is chosen as MVP of the season",MVP[t].name);
    return 0;
}