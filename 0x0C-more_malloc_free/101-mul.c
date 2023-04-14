#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _is_positive - checks if a string represents a positive number
 * @s: string to check
 *
 * Return: 1 if string is positive number, 0 otherwise
 */
int _is_positive(const char *s)
{
    if (*s == '-')
        return (0);
    while (*s)
    {
        if (!isdigit(*s))
            return (0);
        s++;
    }
    return (1);
}

/**
 * _mul - multiplies two positive numbers represented as strings
 * @num1: first number
 * @num2: second number
 *
 * Return: pointer to string representing the product of num1 and num2
 */
char *_mul(const char *num1, const char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    char *result = calloc(len1 + len2 + 1, sizeof(char));
    int i, j, carry;

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            int prod = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
            result[i + j + 1] = prod % 10;
            carry = prod / 10;
        }
        result[i] += carry;
    }

    while (*result == 0 && *(result + 1))
        result++;

    for (i = 0; i < len1 + len2; i++)
        result[i] += '0';

    return (result);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, 98 if there is an error
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!_is_positive(argv[1]) || !_is_positive(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    char *result = _mul(argv[1], argv[2]);

    printf("%s\n", result);

    free(result);

    return (0);
}
