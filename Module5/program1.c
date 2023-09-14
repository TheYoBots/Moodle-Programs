/* Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 50 students in the college.
(1) Write a function to print names of all students who joined in a
particular year.
(2) Write a function to print the data of a student whose roll
number is received by the function.
Test cases:
case=t1
input=2014
53
output=Year of joining:2014
Roll No:3
Name:Kishor
Department:IT
Course: B.tech

Roll No:10
Name:Mohammad Siraj Alam
Department:Computer Science
Course: B.tech

Roll No:2
Name:Ramesh
Department:IT
Course: B.tech

Roll No:53
Name:Deepak
Department:Computer Applications
Course:BCA
Year of joining:2013
*/
//write a program for next line


#include<stdio.h>

struct Student {
    int roll;
    char name[100];
    char dept[100];
    char course[100];
    int year;
} stu[100] = {3, "Kishor", "IT", "B.tech", 2014,
10, "Mohammad Siraj Alam", "Computer Science", "B.tech", 2014,
2, "Ramesh", "IT", "B.tech", 2014,
53, "Deepak", "Computer Applications", "BCA", 2013,
1, "Aakash", "Tool and Die", "Diploma", 2012,
13, "Karan", "Mechanical", "Diploma", 2013
};

int main() {
    int n,a,b;
    scanf("%d%d",&a,&b);
    printf("Year of joining:%d",a);
    for(int i=0; i<=100; i++) {
        if(stu[i].year==a) {
            printf("\nRoll No:%d\n",stu[i].roll);
            printf("Name:%s\n",stu[i].name);
            printf("Department:%s\n",stu[i].dept);
            printf("Course:%s\n",stu[i].course);
        }
    }
    for(int i=0; i<100; i++) {
        if(stu[i].roll==b) {
            printf("\nRoll No:%d",stu[i].roll);
            printf("\nName:%s",stu[i].name);
            printf("\nDepartment:%s",stu[i].dept);
            printf("\nCourse:%s",stu[i].course);
            printf("\nYear of joining:%d",stu[i].year);
        }
    }
    return 0;
}