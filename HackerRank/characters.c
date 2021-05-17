#include <stdio.h>

int main() {

    char ch, s[50], sen[100];

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Enter a string: ");
    scanf("%s", s);
    
    printf("Enter a sentence: ");
    scanf("\n");
    scanf("%[^\n]s", sen);

    printf("\n%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);    

}