#include <stdio.h>

// decimal to binary function
void decimalToBinary(int num)
{
    // original number
    int n = num;
    if (num == 0)
    {
        printf("The decimal value 0 is 0");
        return;
    }

    // Stores binary representation of number.
    int binaryNum[32]; // Assuming 32 bit integer.
    int i = 0;

    for (; num > 0;)
    {
        binaryNum[i++] = num % 2;
        num /= 2;
    }

    printf("The decimal value %d", n);
    printf(" is ");
    // Print binary representation of number.
    // Printing array in reverse order.
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    printf(" in binary");
}

// function decimal to hexadecimal
void decimalToHexadecimal(int num)
{
    // original number
    int n = num;
    if (num == 0)
    {
        printf("The decimal value 0 is 0");
        return;
    }

    // Stores hexadecimal representation of number.
    int hexaNum[32]; // Assuming 32 bit integer.
    int i = 0;

    for (; num > 0;)
    {
        hexaNum[i++] = num % 16;
        num /= 16;
    }

    printf("The decimal value %d", n);
    printf(" is ");
    // Print hexadecimal representation of number.
    // Printing array in reverse order.
    for (int j = i - 1; j >= 0; j--)
    {
        if (hexaNum[j] > 9)
        {
            printf("%c", hexaNum[j] + 55);
        }
        else
        {
            printf("%d", hexaNum[j]);
        }
    }
    printf(" in hexadecimal");
}

int main()
{
    // prompt user to enter a number
    int num;
    printf("Enter a Decimal number to convert: ");
    scanf("%d", &num);
    // pass the number to the decimal function
    decimalToBinary(num);
    // pass the number to the hexadecimal function
    decimalToHexadecimal(num);

    return 0;
}
