#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filengthame, char *text_content)
{
	int length;
	int fd, wr;

	if (filengthame == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fd = open(filengthame, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
		{
			return (-1);
		}
		return (1);
	}
	fd = open(filengthame, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	for (length = 0; text_content[length]; length++)
	{
		wr = write(fd, text_content, length);
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
