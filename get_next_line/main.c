#include "dnightwi/get_next_line.h"
#include "dnightwi/get_next_line.c"
#include <stdio.h>

int main(int argc, char **argv)
{
	int fd;
	char *line;
	int ch;

	ch = 1;
	if (argc > 1)
	{
		fd = open (argv[1], O_RDONLY);
		while (get_next_line(fd, &line) == 1)
			printf("%s\n", line);
			
//		while (ch == 1)
//		{
//			printf("return = %d\n", ch = get_next_line(fd, &line));
//			if (ch == 1)
//				printf("%s\n", line);
//		}
	}
	return (0);
}
