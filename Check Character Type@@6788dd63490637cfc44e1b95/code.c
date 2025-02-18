#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>=0||ch<=9){
        printf("Digit");
    }
    else if(isalpha(ch)){
        ch = tolower(ch);
        if(ch==a||ch==e||ch==i||ch==0||ch==u){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }



    }
    else{
        printf("Special Character");
    }

    
    return 0;
}
