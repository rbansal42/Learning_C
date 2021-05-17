#include <stdio.h>

int main() {

    int t;
    char s[100000];

    scanf("%d", &t);
    
    for(int i=0; i<t; i++) {

        scanf("%s", s);

        int a = 0, e = 0, i = 0, o = 0, u = 0;
        int a1 = 0, e1 = 0, i1 = 0, o1 = 0, u1 = 0;


        // Loop that checks characters in the given string for vowels and asign corresponding binary value.
        for(int j = 0; s[j] != '\0'; j++) {


            switch(s[j]) {

                case 'a': a = 1;
                    break;
                case 'e': e = 1;
                    break;
                case 'i': i = 1;
                    break;
                case 'o': o = 1;
                    break;
                case 'u': u = 1; 
                    break;
                case 'A': a1 = 1;
                    break;
                case 'E': e1 = 1;
                    break;
                case 'I': i1 = 1;
                    break;
                case 'O': o1 = 1;
                    break;
                case 'U': u1 = 1;
                    break;

            
            }


        }
            if(a==1 && e==1 && i==1 && o==1 && u==1) {

                printf("lovely string\n");
            }

            else if (a1==1 && e1==1 && i1==1 && o1==1 && u1==1) {

                printf("lovely string\n");
            }

            else {

                printf("ugly string\n");
            }
    
    }

return 0;

}