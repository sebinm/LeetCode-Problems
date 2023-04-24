#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

bool isHappy(int n);

int main(void)
{
    int number;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    if (isHappy(number))
    {
        printf("\n%d is a happy number\n\n", number);
    }
    else 
    {
        printf("\n%d is not a happy number\n\n", number);
    }

    return 0;
}



bool isHappy(int n)
{
    int index = 0;
    int number;
    int* table = malloc(sizeof(int) * index);

    if (n <= 0)
    {
        return false;
    }

    while (true)
    {
        number = 0;
        int i;

        while (n)
        {
            number += (n % 10) * (n % 10);
            n /= 10;
        }

        if (number == 1)
        {
            return true;
        }

        for (i = 0; i < index; ++i)
        {
            if (table[i] == number)
            {
                return false;
            }
        }
        table = realloc(table, sizeof(int) * (index+1));
        table[index++] = number;
        n = number;
    }
}  