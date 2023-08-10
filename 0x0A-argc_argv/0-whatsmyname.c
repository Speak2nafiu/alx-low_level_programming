#include <stdio.h>
#include <string.h>

/**
 *main - writes program name
 *@argc: name of prg
 *@argv: augument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char *programName;
	char *programNameOnly;

	if (argc == 0)
	{
		return (0);
	}

	programName = argv[0];
	programNameOnly = programName + strlen(programName);

	while (programNameOnly > programName && *programNameOnly != '/')
	{
		programNameOnly--;

	}
	if (*programNameOnly == '/')
	{
		programNameOnly++;

	}

	printf("%s\n", programNameOnly);
	return (0);
}
