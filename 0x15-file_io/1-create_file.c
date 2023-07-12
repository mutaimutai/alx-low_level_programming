#include "main.h"
/**
 * create_file-creates a file and copies content to it
 * @filename:name of the file to be crated
 * @text_content:the text to be copied into the file after creation
 * Return:1 if successful and -1 if not successful & characters printed
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t open_f, wr_char;

	if (filename == NULL)
		return (-1);
	open_f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		wr_char = write(open_f, text_content, strlen(text_content));
		if (wr_char == -1)
		{
			close(open_f);
			return (-1);
		}
	}
	close(open_f);
	return (1);
}
