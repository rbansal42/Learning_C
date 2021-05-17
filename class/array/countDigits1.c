#include <stdio.h>
#define MAX 20
int main()
{
    char str[MAX],rev[MAX];
    int i, countDigit,countAlpha;
    
    printf("\n Enter String ");
    scanf("%[^\n]s",str);
    
    for(i=0,countDigit=0,countAlpha=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
            countDigit=countDigit+1;
            
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            countAlpha=countAlpha+1;
    }
    
    
    printf("\n String entered by you : %s",str);
    printf("\n Digits in strings are : %d",countDigit);
    printf("\n Alphabets in strings are : %d",countAlpha);
    return 0;
}
