#include <stdio.h>
#include <ctype.h>  // For using the tolower function

int main() {
    char ch;
    
    // Read a character from user input
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    ch = tolower(ch);

   
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel");
    } else {
        printf("The character '%c' is not a vowel.\n", ch);
    }
    
    return 0;
}
