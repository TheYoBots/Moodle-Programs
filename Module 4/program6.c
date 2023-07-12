/* Write a recursive function to compute the greatest common divisor given by
Euclid’s algorithm, for example: for A = 1980, B = 1617 as follows:
1980 / 1617 = 1   1980 – 1 * 1617 = 363
1617 / 363 = 4    1617 – 4 * 363 = 165
363 / 165 = 2     363 – 2 * 165 = 33
5 / 33 = 5        165 – 5 * 33 = 0

When B reaches zero return the A value as GCD>

Test case example:
case=t1
input=
1980 1617
output=
33

*/
//write a program from next line

#include<stdio.h>
int gcd(int, int);
int main()
{
    int a, b, gc, max, min;
    //printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    if (a>b)
    {
     	max = a;
    	min = b;
    }
    else
    {
	       max = b;
        	min = a;
    }
    a = max;
    b = min;
    gc = gcd(a, b);
    printf("%d", gc);
    return 0;
}

int gcd(int a, int b)
{
    //complete the recursive function
    if(b==0)
        return a;
    else if(a%b==0)
        return b;
    else
        gcd(b,a%b);
}