/* 
The solubility of sugar in 1 litre of water at X degree temperature  is A grams. For unit rise in temperature, the solubility of sugar in water 
increases by B grams.We can increase the temperature to at most 100 degrees. Find the maximum amount of sugar in grams that can be dissolved in 1 litre of water.

Input 1: example:35 is X degree temperature, 120 is gram of sugar and 2 unit rise in temp.
35 120 2
Amount of sugar that dissolves in 1 litre of water = 250 grams

Input 2
40 120  1
Amount of sugar that dissolves in 1 litre of water = 180 grams

Input 3
40 115  3
Amount of sugar that dissolves in 1 litre of water = 295 grams

*/
//Start writing program from next line

#include<stdio.h>

int main() {
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    printf("Amount of sugar that dissolves in 1 litre of water = %d grams",a+b*(100-x));
    return 0;
}