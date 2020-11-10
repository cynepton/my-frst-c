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

    // Use %s for strings and %d for integers
    printf("The character name is %s\n", characterName);
    printf("The character age is %d\n", integerAge);

    
    return 0;
}