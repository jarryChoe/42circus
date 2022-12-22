#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#define BUFFER_SIZE 8 

int main(void)
{
	int fd;
	char buf[BUFFER_SIZE + 1];
	int temp_read_size = 0;

	fd = open("./text.txt", O_RDONLY);
	if (fd == -1)
		printf("file open error\n");
	else
	{
		read(fd, buf, BUFFER_SIZE);
		printf("%s", buf);
		memset(buf, 0, BUFFER_SIZE);	
		close(fd);
	}
	return (0);
}
