#include <stdio.h>
#include <stdlib.h>

int main () {
    // Print Hello World!
    printf("Hello World!\n");

    // storing variables

    // When storing a string, don't forget to add the square brackets, without
    // without it, char in C stores a single ascii character
    char characterName[] = "Isaac";

    // Integers
    int integerAge = 30;

    // double
    double doubleType = 3.7;


    // Use %s for strings and %d for integers
    // The % and letter are called format specifiers
    printf("The character name is %s\n", characterName);
    printf("The character age is %d\n", integerAge);
    printf("The character age is %f\n", doubleType);
    printf("The character age is %f and the name is %s\n", doubleType, characterName);
    
    return 0;
}