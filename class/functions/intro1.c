#include <stdio.h>


void printmenu(char c) //definition and declaration of a function
{
    int i;
    printf("\n");
    for(i=1;i<40;i++)
        printf("%c",c);
        
    printf("\n        Sushant University          \n");
    
    for(i=1;i<40;i++)
        printf("%c",c);
    
    return;
}


#include <stdio.h>
void printmenu(char c) //definition and declaration of a function
{
    int i;
    printf("\n");
    for(i=1;i<40;i++)
        printf("%c",c);
        
    printf("\n        Sushant University          \n");
    
    for(i=1;i<40;i++)
        printf("%c",c);
    
    return;
}
int main() 
{
    // Write C code here
    //arguments, parameters, input to the function
    printf("\n I am calling a function !!"); //using a function, calling a function
    printmenu('#'); //using a function
    printf("\n This comes after calling the printmenu() !!");
    return 0;
}