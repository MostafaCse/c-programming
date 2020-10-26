#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the letter: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<= 'Z')
        {ch =ch+32;
        printf("The letter is %c",ch);
        }
    else if (ch>= 'a' && ch <= 'z')
    {
        ch = ch-32;
        printf("The letter is %c",ch);

        }
        return 0;

}
