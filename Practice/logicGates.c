#include <stdio.h>

int main() {

    char type[5];
    int a,b;

    char inputLogicType(char type) {

        printf("Your options are OR, AND, NOR, NAND, XOR, XAND");
        printf("\nEnter the type of gate you want to evaluate.\n");
        scanf("%s", type);
    }

    char inputA(int a) {

        scanf("%d", &a);
    }
    
    void verifyInputLogicType(char type) {

        if(type == 'OR' || type == 'AND'|| type == 'NOR'|| type == 'NAND'|| type == 'XOR'|| type == 'XAND'
        || type == 'or'|| type == 'and'|| type == 'nor'|| type == 'nand'|| type == 'xor'|| type == 'xand') {

            printf("Valid Input.\n Enter input a: ");
            scanf("%d", &a);

            if(a != 0 || a != 1) {

                printf("Input received. Enter input b:\n");
            }

            else {
                printf("Invalid input. Enter either 0 or 1.");
                printf("Enter input a: ");
                scanf("%d", &a);

            }
    }
    }


    printf("Your options are OR, AND, NOR, NAND, XOR, XAND");
    printf("\nEnter the type of gate you want to evaluate.\n");
    scanf("%s", type);

    if(type == 'OR' || type == 'AND'|| type == 'NOR'|| type == 'NAND'|| type == 'XOR'|| type == 'XAND'
        || type == 'or'|| type == 'and'|| type == 'nor'|| type == 'nand'|| type == 'xor'|| type == 'xand') {

            printf("Valid Input.\n Enter input a: ");
            scanf("%d", &a);

            if(a != 0 || a != 1) {

                printf("Input received. Enter input b:\n");
            }

            else {
                printf("Invalid input. Enter either 0 or 1.");
                printf("Enter input a: ");
                scanf("%d", &a);

            }
    }

}