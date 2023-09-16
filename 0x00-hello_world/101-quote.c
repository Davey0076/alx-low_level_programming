#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	const char *message = "and that piece of art is useful" - Dora Korpar, 2015-10-19";
	ssize_t bytes_written = write(STDERR_FILENO, message, strlen(message));

	if (bytes_written == -1) {
		perror("write");
		return 1;
	}
	return (1);
}
