 //# System call
// # ./desdcp src.txt desd.txt
// open("src.txt", O_RDONLY);
 //open("dest.txt", O_WRONLY);
 #include <fcntl.h> 
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char buf;
	int fd_one, fd_two;

	fd_one = open("scr.txt", O_RDONLY);

	if (fd_one == -1)
	{
		printf("Error opening first_file\n");
		exit(EXIT_FAILURE);
	}

	fd_two = open("desd1.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	
	while(read(fd_one, &buf, 1))
	{
		write(fd_two, &buf, 1);
	}

	printf("Successful copy");

	close(fd_one);
	close(fd_two);
    return 0;
}