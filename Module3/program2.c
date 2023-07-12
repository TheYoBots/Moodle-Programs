/* In a class there are n no. of students.one day the sprts teacher measured height of all of them 
and he wants to know the student with minimum height and Maximum height. Help the sports teacher 
to find the minimum and maximum height student in the class.

Test cases:
case=t1
input=9 
85 109 125 115 129 102 113 117 112 
output= Height of smallest student in class = 85 cms
Height of Tallest student in class = 129 cms
*/
//write the program from next line 

#include<stdio.h>

int main() {
    int n,a[100];
    int min,max;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(int i=0; i<n; i++) {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("Height of smallest student in class = %d cms\n",min);
    printf("Height of Tallest student in class = %d cms",max);
    return 0;
}