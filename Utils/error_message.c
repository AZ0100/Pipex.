#include "../Includes/pipex.h"

void	error_message(char *str)
{
	write (STDERR_FILENO, str, ft_strlen(str));
	write (STDERR_FILENO, "\n", 1);
	exit(1);
}