#include <stdio.h>

//Function that scans and verifies input

char username(a) {

    char user[5] = "Rahul";
    char input[15];

    printf("Enter username: ");
    scanf("%s", input);

    // Verifying Input

    for(int i=0; input[i] != '\0'; i++) {

        if(input[i] != user[i]) {
            printf("Invalid input. Try Again. \n");
            username();
        }
    }    

    printf("Authentication succeeded.");

}

int main() {

    char a;
    username(a);

}