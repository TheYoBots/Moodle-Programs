/* Given a enum with predefined values and nested structure with existing product details where product category is fetched from enum.
Write a structure program to enter a existing product name as given in the structure below, and print the product category id.

//note: use the structure and enum templates given below exactly as it is. There are 5 products and 5 categories in enum.

Take values as:{"bread", 50, Dairy,
"Brocolli", 140, Vegetables,
"Lychee", 70, Fruits,
"Peanuts", 200, Grocery,
"Limesoda", 20, Beverages} 

Test cases example:
input=Peanuts
output=Category ID: 104

Explaination: In the structure Peanuts category is Grocery, hence the output is 104.

case=t2
input=Lychee
output=Category ID: 101


*/

#include<stdio.h>
#include<string.h>

struct Veg {
    char veg[20];
    int id;
    char type[20];
} Veg[]={"bread", 103, "Dairy",
"Brocolli", 102, "Vegetables",
"Lychee", 101, "Fruits",
"Peanuts", 104, "Grocery",
"Limesoda", 100, "Beverages"};

int main() {
    char veggie[20];
    scanf("%s",veggie);
    for(int i=0; i<4; i++) {
        if(strcmp(veggie, Veg[i].veg)==0)
            printf("Category ID: %d",Veg[i].id);
    }
    return 0;
}