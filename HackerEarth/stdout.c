// Question: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/tutorial/

#include <stdio.h>

int main() {

    int a;
    char b[15];

    scanf("%d", &a);
    printf("%d\n", a*2);

    scanf("%s", b);

    printf("%s", b);

    return 0;
}