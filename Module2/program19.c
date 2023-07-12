/* 
Some prime numbers can be expressed as a sum of other consecutive prime numbers. 
For example: 
5 = 2 + 3
17 = 2 + 3 + 5 + 7
 
Your task is to find out how many prime numbers which satisfy above property are present in the range 3 to N 
subject to a constraint that summation should always start with number 2.

Input Format: First line contains a number N
Output Format: Print all such numbers separated by space.

test case example:
input=100
output=5 17 41
*/
//Start writing program from next line

#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n) {
    if(n%2==0)
        return false;
    for(int i=3; i<=n/2; i+=2) {
        if(n%i==0)
            return false;
    }
    return true;
}

int main() {
    int n,sum=2;;
    scanf("%d",&n);
    for(int i=3; sum<n; i+=2)
    {
        if(isPrime(i)) {
            sum+=i;
            if(isPrime(sum)) {
                printf("%d ",sum);
            }
        }
    }
    return 0;
}