#include<stdio.h>
/**
 * main - Prints reversed alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int counter;
for (counter = 122; counter > 96; counter--)
{
putchar(counter);
}
putchar('\n');
return (0);
}
