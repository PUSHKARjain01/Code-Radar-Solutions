#include <stdio.h>
#include <ctype.h>  // For using the tolower function

int main() {
    char ch;
    
    // Read a character from user input
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Convert the character to lowercase to handle both uppercase and lowercase vowels
    ch = tolower(ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("The character '%c' is a vowel.\n", ch);
    } else {
        printf("The character '%c' is not a vowel.\n", ch);
    }
    
    return 0;
}
