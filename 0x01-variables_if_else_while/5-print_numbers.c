#include<stdio.h>
/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int counter;
for (counter = 0; counter <= 9; counter++)
{
printf("%d", counter);
}
putchar('\n');
return (0);
}
