//

#include <stdio.h>

int main() {

  int size;
  char a[size]; char *ptr;

  printf("Input the size of the array: ");
  scanf("%d", &size);

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