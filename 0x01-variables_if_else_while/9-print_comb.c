#include<stdio.h>
/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int counter;
for (counter = 48; counter < 58; counter++)
{
putchar(counter);
if (counter != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
