#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
	DIR *dir = opendir(".");

	FILE *library = fopen("liball.a", "wb");

	if (library == NULL)
		{
			perror("Error creating library");
			closedir(dir);
			return 1;
		}

	while ((entry = readdir(dir)) != NULL)
		{
			if (entry->d_type == DT_REG && strstr(entry->d_name, ".c") != NULL)
				{
					snprintf(compile_command, sizeof(compile_command), "gcc -c %s", entry->d_name);
					system(compile_command);

					snprintf(object_name, sizeof(object_name), "%.*s.o", (int)strlen(entry->d_name) - 2, entry->d_name);
					snprintf(append_command, sizeof(append_command), "ar rcs %s %s", "liball.a", object_name);
					system(append_command);
					(object_name);
				}
		}
	closedir(dir);

	fclose(library);

	printf("Static library liball.a created.\n");

return 0;

}

