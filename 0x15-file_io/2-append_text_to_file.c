#include "main.h"
/**
 * append_text_to_file-appends a file to another file
 * @filename:file to be opened
 * @text_content:the file to be added
 * Return:the number of characters printed out if successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t op, wr_ch;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		wr_ch = write(op, text_content, strlen(text_content));
		if (wr_ch == -1)
		{
			close(op);
			return (-1);
		}
	}
	close(op);
	return (1);
}
