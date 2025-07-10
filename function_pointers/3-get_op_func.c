#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the function that corresponds to the operator given
 *         as a parameter, or NULL if no match is found.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int index;

	/* Validate input: NULL, empty string, or multi-character operator */
	if (s == NULL || s[0] == '\0' || s[1] != '\0')
		return (NULL);

	switch (s[0])
	{
	case '+':
		index = 0;
		break;
	case '-':
		index = 1;
		break;
	case '*':
		index = 2;
		break;
	case '/':
		index = 3;
		break;
	case '%':
		index = 4;
		break;
	default:
		return (NULL);
	}

	return (ops[index].f);
}
