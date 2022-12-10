#include <stdio.h>
/**
 * main - Print all single digit numbers of base 10 starting from 0,
 *
 *
 * Return: Always 0.
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
