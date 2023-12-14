#include "monty.h"

static int num_arg;

/**
 * read_FL - A function to read the file lines
 * @fname: The filename
 * @stack: stack
 */
void read_FL(char *fname, stack_t **stack)
{
	size_t length = 0;
	ssize_t readline = 0;
	char *operational_code = NULL, *lines = NULL;
	int line_count = 1;
	FILE *file;
	instruct_handler handler;


	/* open the file */
	file = fopen(fname, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", fname);
		exit(EXIT_FAILURE);
	}
	/*read the lines*/

	lines = NULL;
	while ((readline = getline(&lines, &length, file)) != -1)
	{
		operational_code = interpret_line(line_count, lines);
		if (operational_code == NULL || operational_code[0] == '#')
		{
			line_count++;
			continue;
		}
		/*get the function related to the operational_code*/
		handler = find_opcode_handler(operational_code);
		if (handler == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n",
					line_count, operational_code);
			exit(EXIT_FAILURE);
		}
		func(stack, line_count);
		line_count++;
	}
	free(lines);
	fclose(file);
}

