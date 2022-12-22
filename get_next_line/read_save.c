#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 2

int main(void)
{
	int fd;
	char buf[BUFFER_SIZE+1];
	int temp_read_size;
	char *save;

	fd = open("./text.txt", O_RDONLY);
	if(fd == -1)
		printf("file read error\n");
	else
	{
		printf("hi");
		while((temp_read_size = read(fd, buf, BUFFER_SIZE)) > 1)
		{
			buf[temp_read_size] = '\0';
			if (save == NULL)
				save = strdup(buf);
			else
				strcat(save, buf);
			memset(buf, 0, BUFFER_SIZE);
		}
		printf("%s", buf);
		close(fd);
	}
	return (0);
}
