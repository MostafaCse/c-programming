#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the word");
    scanf("%c", &ch);

    if( ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
        printf("The letter is a vowel");
    else
        printf("The letter is consonant");
    return 0;
}
