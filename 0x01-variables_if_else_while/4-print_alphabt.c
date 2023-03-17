#include<stdio.h>
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int counter;
for (counter = 97; counter < 123; counter++)
{
if (counter != 101 && counter != 113)
{
putchar(counter);
}
}
putchar('\n');
return (0);
}
