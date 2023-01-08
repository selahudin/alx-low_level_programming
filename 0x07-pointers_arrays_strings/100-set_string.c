#include "main.h"

/**
 * set_string - it is  a function that sets the value of a pointer to a char.
 * or it is going to put a pointer value to the char.
 * @s: it is a pointer to pointer that we need to set or to put.
 * the value to a char.
 * @to: it is a string that we need to set.
 * that we will get from the pointer value.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
