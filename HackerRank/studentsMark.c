#include <stdio.h>

int main() {

    int students; char gender; int output=0;

    printf("Enter the no of students: ");
    scanf("%d", &students);

    int marks[students];

    printf("Enter marks: ");

    for(int i=0; i<students; i++) {

        scanf("%d", &marks[i]);

    }

    printf("Enter gender: ");
    scanf("%c", &gender);


    if(gender == 'b') {

        for(int i=0; i<students; i=i+2) {

            output += marks[i];
        }
    }

    else if(gender == 'g') {

        for(int i=1; i<students; i=i+2) {

            output += marks[i];
        }
    }

    printf("%d", output);

}