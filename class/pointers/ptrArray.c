//

#include <stdio.h>

int main() {

  char a[20]; char *ptr;
  int c = 0;

  printf("\nInput a value: ");
  scanf("%s", a);

    ptr = &a[0];

    while (*ptr != '\0')
    {
        c++;
        ptr++;
    }
    
    printf("Length of %s is %d\n", a, c);

}