/* Given three variables a, b, c write a function to circularly shift their values to left. 
In other words if a = 5, b = 8, c = 10, after circular shift a= 8 b= 10 c= 5. 
Call the function with variables a, b, c to circularly shift values.

Note: use the concept of pointers and the function already provided in the file. 

test case example:
-----------------
input=2 3 4
output="a: 3    b: 4	c: 2"
 
*/
//code starts from next line

#include<stdio.h>

void circularshift(int *a, int *b, int *c)
{
   //write your code here
   int temp=*a;
   *a=*b;
   *b=*c;
   *c=temp;
}

int main()
{
    //pass 3 variables to function
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    circularshift(&a, &b, &c);
    printf("a: %d\tb: %d\tc: %d", a, b, c);
    return 0;
}