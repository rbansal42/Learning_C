#include <stdio.h>

int main() {

    char a, s[100], sen[100];

    scanf("%c", &a);
    scanf("%s", s);
    scanf("\n%[^\n]s", sen);

    printf("%c\n%s\n%s", a, s, sen);

}