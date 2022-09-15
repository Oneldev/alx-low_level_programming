#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print
 * Return: 0
 */

int main(void)
{
int i, p;

for (i = 0; i <= 99; i++)
{
for (p = 0; p <= 99; p++)
{
if (i > p && i != p)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((p / 10) + '0');
putchar((p % 10) + '0');
if (i != 98 || p != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
