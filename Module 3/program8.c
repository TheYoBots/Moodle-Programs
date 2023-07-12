/*Write a c program to print first n fibanacci words from 0 through n.
for example:if n=5 then print the following:
input=5
output=
f(0) = a
f(1) = b
f(2) = ba
f(3) = bab
f(4) = babba


Constraints:The maximum number of fibanacci characters can be printed is 1000 characters.
i.e print upto 1000 characters and den print 
error message as: can not print more than the 1000 characters "

*/
//write program from next line

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[1000]= "a";
    char b[1000]= "b";
    char c[1000];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        if(strlen(a) > 1000) {
            printf("can not print more than the 1000 characters ");
            exit(0);
        }
        printf("f(%d) = %s\n",i,a);
        strcpy(c,a);
        strcpy(a,b);
        strcat(b,c);
    }
    return 0;
}