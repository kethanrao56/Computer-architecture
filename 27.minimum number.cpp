#include <stdio.h>
int main() 
{
    int numbers[] = {2, 43, 11, 9, 4, 12, 1, 16};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int minimum = numbers[0];

    for (int i = 1; i < size; i++) 
	{
        if (numbers[i] < minimum) 
		{
            minimum = numbers[i];
        }
    }
    printf("The minimum number is: %d\n", minimum);
    return 0;
}

