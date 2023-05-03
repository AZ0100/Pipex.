
#include "../Includes/pipex.h"

void	child1(int *fd, char **av, char **env)
{
	char	**arg1;
	char	*path1;
	int		infile;

	infile = open(av[1], O_RDONLY);
	arg1 = ft_split(av[2], ' ');
	path1 = get_path(arg1[0], env);
	if (access(av[2], R_OK) == -1)
	{
		if (infile == -1)
			error_message("Can't open the file");
		exit (0);
	}
	close(fd[0]);
	if (dup2(infile, 0) == -1)
		error_message("Error while duplicating");
	close(infile);
	if (dup2(fd[1], 1) == -1)
		error_message("Error while duplicating");
	close(fd[1]);
	execve(path1, arg1, env);
	exit(1);
}