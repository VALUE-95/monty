#include "monty.h"

/**
 * interpret_line - parse the line
 * @linenum: linenum
 * @lines: line
 *
 * Return: operational_code or NULL
 */
char *interpret_line(int linenum, char *lines)
{
	char *operational_code = NULL;
	char *args = NULL;

	/*start by tokenize the string to get the operational_code*/
	operational_code = strtok(lines, " \n");
	if (operational_code == NULL)
		return (NULL);

	if (strcmp(operational_code, "push") == 0)
	{
		args = strtok(NULL, " \n");
		if (args != NULL && is_integer(args))
		{
			num_arg = atoi(args);
		}
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", linenum);
			exit(EXIT_FAILURE);
		}
	}
	return (operational_code);
}
