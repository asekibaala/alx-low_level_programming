#include<stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int counter;
for (counter = 0; counter < 52; counter++)
{
putchar(alphabets[counter]);
}
putchar('\n');
return (0);
}
