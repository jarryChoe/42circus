#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{

	int fd1;
	int fd2;

	fd1 = open("text.txt", O_RDONLY);
	if (fd1 == -1)
		return (1);
	printf("fd1 : %d\n", fd1);
	printf("\nDuplication\n\n");
	fd2 = dup2(fd1, 42);
	printf("fd1\t: %d\n", fd1);
	printf("fd2\t: %d\n", fd2);
	close(fd1);
	close(fd2);
	return (0);

	/*
	int fd;
	char buf[100];

	fd = open("./text.txt", O_RDONLY);
	if (fd < 0)
		printf("file open error");
	else
	{
		read(fd, buf, sizeof(buf));
		printf("%s", buf);
		close(fd);
	}
	return (0);
	*/
}
