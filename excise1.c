#include <stdio.h>
#include <string.h>
// Read a string from the keyboard with at least 2 characters which are digits (0-9)
// Create a string

// function to check if a character is a digit
int Digits(char term[])
{
    int i = 0;
    int j = 0;
    char newterm[30];
    while (term[i] != '\0')
    {
        if (term[i] >= '0' && term[i] <= '9')
        {
            newterm[j] = term[i];
            j++;
        }
        i++;
    }
    return j;
}
int main()
{
    char term[30];
    char newterm[30];
    int length = 0;
    // Ask the user to input some text
    printf("Enter a string with atleast 2 character digits: \n");
    // Get and save the text
    scanf("%s", term);
    // atleast

    int ret = Digits(term);
    // printf( "Max value is : %d\n", ret );

    // check if the string contains at least 2 digits
    if (ret >= 2)
    {
        printf("value of i %d", ret);
        printf("newterm %s\n", newterm);
        printf("The string contains at least 2 digits: %s", newterm);
        // determine the length of the new string
        while (newterm[length] != '\0')
        {
            length++;
        }
        printf("Length of new string is %d", length);
    }
    else
    {
        printf("The string does not contains at least 2 digits! retry: %s", term);
    }

    return 0;
}
