/* 
Write a program to find the grace marks for a student using switch.The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic:

If the student gets 1st class and the number of subjects he failed in is greater than 3, then print not eligible for grace marks. Otherwise print eligible for 5 grace marks per subject.
If the student gets 2nd class and the number of subjects he failed in is greater than 2, then print not eligible for grace marks. Otherwise print eligible for 4 grace marks per subject.
If the student gets 3rd class and the number of subjects he failed in is greater than 1, then print not eligible for grace marks. Otherwise print eligible for 3 grace marks per subject.

Input format: student need to enter the class obtained (1 or 2 or 3) and number of subjects failed.
If student enter any other choice apart the given classes print error message as "Wrong choice. Please enter valid class"

Test case examples:

input=2 2
output=
eligible for 4 grace marks per subject.

input=3 2
output=
not eligible for grace marks.
*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    switch(a) {
        case 1:
        if(b>3)
            printf("not eligible for grace marks.");
        else
            printf("eligible for 5 grace marks per subject.");
        break;
        case 2:
        if(b>2)
            printf("not eligible for grace marks.");
        else
            printf("eligible for 4 grace marks per subject.");
        break;
        case 3:
        if(b>1)
            printf("not eligible for grace marks.");
        else
            printf("eligible for 3 grace marks per subject.");
        break;
        default: printf("Wrong choice. Please enter valid class");
    }
    return 0;
}