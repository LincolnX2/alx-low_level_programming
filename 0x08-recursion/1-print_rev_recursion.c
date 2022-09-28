#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * @s:input
 * main-Driver program to test above function
 * return 0
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion;
_putchar("%c\n", *s);
}

int main(void)
{
char a[] = "code";
_print_rev_recursion(a);
return (0);
}
}
