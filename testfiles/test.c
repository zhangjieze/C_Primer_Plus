/*This is the test file for me. I just use it to test the C programming language features.*/
#include <stdio.h>
int main(void){
    char s;
    s = 'a'; // Assigning a character to variable s
    printf("The character is: %c\n", s); // Printing the character stored in s
    printf("The size of s is: %zu bytes\n", sizeof(s)); // Printing the size of variable s
    return 0; 
}