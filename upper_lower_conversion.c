/*
* Conversion of string characters into opposite case
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char Words[100];
    int Length, i;
    printf("Enter a string : ");
    gets(Words);
    Length = strlen(Words);
    for (i = 0; i < Length; i++) {
        if (islower(Words[i])) {
            putchar(toupper(Words[i]));
        }
        else {
            putchar(tolower(Words[i]));
        }
    }
    printf("\n");
    return 0;
}
