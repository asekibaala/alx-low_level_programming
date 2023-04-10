#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
        if (argv[0] != NULL) {
        printf("Program name: %s\n", argv[0]);
    } else {
        printf("Error: argv[0] is NULL\n");
        return 1;
    }
    return (0);
}
