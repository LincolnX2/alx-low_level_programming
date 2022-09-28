#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * @s:input
 * main-Driver program to test above function
 * return 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
