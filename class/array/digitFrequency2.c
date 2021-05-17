#include <stdio.h>
#define MAX 40

int main()
{
    char str[MAX];
    int i,countzero[10];
    
    scanf("%s",str);
    
    for(i=0;i<10;i++)
       countzero[i]=0;
       
    for(i=0;str[i]!='\0';i=i+1)
    {
        if(str[i]>='0' && str[i]<='9')
           countzero[str[i]-'0'] = countzero[str[i]-'0']+1;
    }
    
    for(i=0;i<10;i++)
        printf("%d ",countzero[i]);
    
    return 0;
}