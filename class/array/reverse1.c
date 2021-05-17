#include <stdio.h>
#define MAX 20

int main()
{
    char str[MAX],rev[MAX];
    int i,j,k;
    
    printf("\n Enter String ");
    scanf("%[^\n]s",str);
    
    for(i=0;str[i]!='\0';i++);
    
    for(j=i-1,k=0;j>=0;j--,k++)
       rev[k]=str[j];
    
    rev[k]='\0';
    
    printf("\n String entered by you : %s",str);
    printf("\n Reverse of String entered by you : %s",rev);

    return 0;
}