#include <stdio.h>

int main() {

    char a[500], b[500], c[500];
    int i;

    scanf("%s", a);

    scanf("%s", b);

    for(i = 0; a[i] != '\0'; i++) {

        c[i] = a[i];

    }

    for(int j = 0; b[j] != '\0'; j++) {

        c[i+j] = b[j];
    }

    printf("%s", c);

}