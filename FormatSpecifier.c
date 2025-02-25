#include <stdio.h>

int main(){
    // format specifier % = defines and formats a type of data to be printed

    //%c = character
    //%s = string (array of characters)
    //%f = float
    //lf = double

    //%.1 = decimal precision
    //%1 = minimum field width
    //%- = left-justified or left align

    float item1 = 5.75;
    float item2 = 20.0;
    float item3 = 103.99;

    printf("Item 1: $%.2f\n", item1);
    printf("Item 2: $%.1f\n", item2);
    printf("Item 3: $%.2f\n", item3);





    return 0;
}