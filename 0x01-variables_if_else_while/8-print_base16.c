#include<stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int counter;
for (counter = 48; counter < 58; counter++)
{
putchar(counter);
}
for (counter = 97; counter < 103; counter++)
{
putchar(counter);
}
putchar('\n');
return (0);
}
