/*
Piglatin is an encoded form of English that is often used by children as a game. 
A piglatin word is formed from an English word by transposing the first sound (usually the first letter) to the end of the word, and then adding the letter “a”. 
Thus, the word “dog” becomes “ogda,” “computer” becomes “omputerca,” “piglatin” becomes “iglatinpa” (or “igpa atinla,” if spelled as two separate words), and so on.
Let us write a C program that will accept a line of English text and then print out the corresponding text in piglatin. 
We will assume that each textual message can be typed on one 80-column line, with a single blank space between successive words. 
(Actually, we will require that the piglutin message not exceed 80 characters. Therefore the original message must be somewhat less than 80 characters, 
since the corresponding piglatin message will be lengthened by the addition of the letter “a” after each word.) 
For simplicity, we will transpose only the first letter (not the first sound) of each word. Also, we will ignore any special consideration that 
might be given to capital letters and to punctuation marks.
We will use two character arrays in this program. One array will contain the original line of English text, and the other will contain the translated piglatin.
The overall computational strategy will be straightforward,consisting of the following major steps.
1. Initialize both arrays by assigning blank spaces to all of the elements.
2. Read in an entire line of text (several words).
3. Determine the number of words in the line (by counting the number of single blank spaces that are followed by a
nonblank space).
4. Rearrange the words into piglatin, on a word-by-word basis, as follows:
(a) Locate the end of the word.
(b) Transposethefirstlettertotheendofthewordandthenaddan“a.” (c) Locate the beginning of the next word.
5. Display the entire line of piglatin.
*/

#include <stdio.h>

int main() {

    char input[70], output[80];

    printf("Input a string of upto 70 characters to convert to piglatin: ");
    scanf("%s", input);

    int len;    
    for(len = 0; input[len] != '\0'; len++);

    printf("Length of string: %d\n", len);


    // Verifying input size
    if(len <= 70) {
        printf("Input string length is valid.\n");
        printf("Input accepted: %s", input);
    }
    else {
        printf("Try again.");
        return 0;
    }

    int iCount=0, oCount=0;

    // Implementing translation
    for(iCount=1, oCount=0; input[iCount] != '\0'; iCount++, oCount++) {

        // if(iCount == 0) {
        output[oCount] = input[iCount];
        //     oCount++;
        //     iCount++;
        // }

        // output[oCount] = input[iCount+1];

    }

    output[oCount++] = input[0];
    output[oCount++] = 'a';
    output[oCount] = '\0';

    printf("\nOutput: %s\n", output);


}