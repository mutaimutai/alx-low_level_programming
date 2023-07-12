#include "main.h"
/**
 * read_textfile-a function that reads a textfile and prints it
 * @filename:pointer to the file to be read
 * @letters:number of characters to be printed out
 * Return:0 if not successful or the number of characters printed out
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_f, ch_read, ch_print;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	open_f = open(filename, O_RDONLY);
	ch_read = read(open_f, buffer, letters);
	ch_print = write(STDOUT_FILENO, buffer, ch_read);
	if (open_f == -1 || ch_read == -1 || ch_print == -1 || ch_read != ch_print)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(open_f);
	return (ch_print);

}

