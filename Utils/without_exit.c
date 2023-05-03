
#include "../Includes/pipex.h"

void	without_exit(char *str)
{
	write (STDERR_FILENO, str, ft_strlen(str));
	write (STDERR_FILENO, "\n", 1);
}