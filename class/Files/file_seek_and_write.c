#include <stdio.h>

int main( ) {

    FILE *fp;

    fp = fopen("new.txt", "w");

    fputs("This is C Programming.", fp);

    fseek(fp, 8, SEEK_SET);
    fputs("JAVA Programming", fp);

    fclose(fp);

}