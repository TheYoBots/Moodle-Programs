/* Write a C program to implement Usage of 4 basic string functions: strlen(), strcpy(), strcmp() & strcat()
Enter two separate strings and apply the above functions on them.

Test case example:
input=griet
college
output=The length of s1 is: 6
The copied value of s3 is: griet
s1 and s3 are equal
The concatenation of s1  and s2  is: griet
college */

#include<stdio.h>
#include<string.h>

int main() {
    char s1[100],s2[100],s3[40];
    //fgets(s1,sizeof(s1),stdin);
    //fgets(s2,sizeof(s2),stdin);
    scanf("%[^\n] %[^\n]",s1,s2);
    int len;
    len=strlen(s1)+1;
    printf("The length of s1 is: %d\n",len);
    strcpy(s3,s1);
    printf("The copied value of s3 is: %s\n",s3);
    if(strcmp(s3,s1)==0)
    {
        printf("s1 and s3 are equal\n");
    }
    else
    {
        printf("s1 and s3 are not equal\n");
    }
    strcat(s1," ");
    strcat(s1,s2);
    printf("The concatenation of s1  and s2  is: %s\n",s1);
    return 0;
}