#include <stdio.h>
#define MAX 20

int main()
{
    char str[MAX],rev[MAX];
    int len,j,k;
    
    printf("\n Enter String ");
    scanf("%[^\n]s",str);
    
    for(len=0;str[len]!='\0';len++);
    
    for(j=len-1,k=0;j>=0;j--,k++)
       rev[k]=str[j];
    
    rev[k]='\0';
    
    printf("\n String entered by you : %s",str);
    printf("\n Reverse of String entered by you : %s",rev);

    return 0;
}