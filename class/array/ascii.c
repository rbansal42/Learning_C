#include <stdio.h>

int main() {

    // scanf("%d, %d", &min, &max);

    for (int i = 65; i <= 90; i++) {

        printf("%c ", i, i);
    }

    printf("\n");

    for (int i = 97; i <= 122; i++) {

        printf("%c ", i, i);
    }

   for(int i = 48; i <= 57; i++) {

        printf("\n%d = %c ", i, i);
    }
}