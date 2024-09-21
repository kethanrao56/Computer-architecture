#include <stdio.h>
#include <string.h>
#include <math.h>
int binaryToDecimal(const char *binary) 
{
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) 
	{
        if (binary[length - 1 - i] == '1') 
		{
            decimal += (1 << i);  
        }
    }
    return decimal;
}
void decimalToHexadecimal(int decimal) 
{
    printf("The hexadecimal representation is: %X\n", decimal);
}
int main() 
{
    char binary[100];
    printf("Enter a binary number (valid characters: 0, 1): ");
    scanf("%s", binary);
    for (int i = 0; i < strlen(binary); i++) 
	{
        if (binary[i] != '0' && binary[i] != '1') 
		{
            printf("Invalid binary number.\n");
            return 1;
        }
    }
    int decimal = binaryToDecimal(binary);
    decimalToHexadecimal(decimal);
    return 0;
}

