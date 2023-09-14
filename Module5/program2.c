#include<stdio.h>

struct Customer {
    int acc_num;
    char name[30];
    int bal;
}sbi[5]={
{77790, "ARUN", 80000},
{44421, "VIVEK", 20000},
{67123, "AKASH", 100},
{88221, "KAVITA", 50000},
{22541, "KAVYA", 10000}
};

int main() {
    int acc,dow,amt;
    scanf("%d%d%d",&acc,&dow,&amt);
    for(int i=0; i<=5; i++) {
        if(sbi[i].acc_num==acc) {
            if(dow==1) {
                sbi[i].bal+=amt;
                if(sbi[i].bal<100)
                    printf("The balance is insufficient for the specified deposit");
                else
                    printf("Dear %s,\n\tUpdated balance after deposit is: %d",sbi[i].name,sbi[i].bal);
            } else {
                sbi[i].bal-=amt;
                if(sbi[i].bal<100)
                    printf("The balance is insufficient for the specified withdrawal");
                else
                    printf("Dear %s,\n\tUpdated balance after withdrawal is: %d",sbi[i].name,sbi[i].bal);
            }
        }
    }
    return 0;
}