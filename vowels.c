#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

char convert_character(char character);

int main(int argc, string argv[])
{
    // Terminate the program if no argument is given by the user
    if (argc == 1)
    {
        printf("Please give a string as an argument to this program. ./vowles <string here>\n");
        return 1;
    }

    // Checks for 'aeio' and converts them to '1337' speak.
    // Start loop at 1 to skip initial argument.
    for (int i = 1; i < argc; i++)
    {
        // For each character in in the current argument check if any character needs changing.
        for (int j = 0, length = strlen(argv[i]); j < length; j++)
        {
            char converted = convert_character(argv[i][j]);
            printf("%c", converted);
        }
        // Add back in the spaces removed from argv
        if (i < argc)
        {
            printf(" ");
        }
    }
    printf("\n");
}

char convert_character(char character)
// Takes a character as input and converts it, if it meets the case requirements.
{
    char return_character;

    switch (tolower(character))
    {
    case 'a':
        return_character = '6';
        return return_character;
    case 'e':
        return_character = '3';
        return return_character;
    case 'i':
        return_character = '7';
        return return_character;
    case 'o':
        return_character = '0';
        return return_character;
    default:
        return_character = character;
        return return_character;
    }
}