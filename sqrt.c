#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int mySqrt(int x);

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    printf("\n\nSqrt(%d) = %d", number, mySqrt(number));
    
    return 0;
}

// Implement sqrt functions

int mySqrt(int x)
{
    int q = 1;

    while (q * q <= x)
    {
        ++q;
    }
    return q-1;
}