#include "main.h"

/**
 * main-a function that print reverse of a passes string.
 * @s:input
 * return 0
 */
void _print_rev_recursion(char *s);
{
if (*s)
{
_print_rev_recursion;
putchar("%c\n", *s);
}
}
int main(void)
{
char a[] = "code";
_print_rev_recursion(a);
return (0);
}

