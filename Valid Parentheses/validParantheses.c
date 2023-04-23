#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char * s);

int main(void)
{
    char str[75];

    scanf("%s", str);

    if (isValid(str))
    {
        printf("Valid Parentheses.\n\n");
    }
    else
    {
        printf("Invalid Parentheses.\n\n");
    }
    return 0;
}

bool isValid(char * s)
{
    char *str1 = malloc(strlen(s));
    int i = 0;

    while(*s != '\0') 
    {
        if (*s == '(' || *s == '{' || *s == '[') 
        {
            str1[i++] = *s;
        }
        else if (*s == ')' || *s == '}' || *s == ']') 
        {
            if (i == 0) 
            {
                return false;
            }

            if (str1[i-1] == '(' && *s == ')') 
            {
                i--;
            } 
            // we can also use one condition in if statement and include 
            // the other two conditions using OR '||' oprator
            else if (str1[i-1] == '{' && *s == '}')
            {
                i--;
            }
            else if (str1[i-1] == '[' && *s == ']')
            {
                i--;
            }
            else 
            {
                return false;
            }

        } 
        s++; 
    }
    return i == 0;
    // if the number i is greater than 0 means that an open bracket has not been closed
    // if the number i is less than 0 means that an close bracket has not been open
}