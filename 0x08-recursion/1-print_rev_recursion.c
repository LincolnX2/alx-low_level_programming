#include "main.h"

/**
 * main-a function that print reverse of a passes string.
 * @s-parameter:a pointer to a function
 *
 * return 0
 */

void _print_rev_recursion(char *s);
{
	if (*s)
	{
	_print_rev_recursion;
	putchar("%c\n",*s);
	}
}
int main()
{
 	char a[] = "code";
  	_print_rev_recursion(a);
return (0);
}

