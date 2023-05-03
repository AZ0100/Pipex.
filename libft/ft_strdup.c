#include "pipex.h"

char	*ft_strdup(char	*s)
{
	char	*dup;
	size_t	strlen;
	size_t	i;

	strlen = ft_strlen(s);
	i = 0;
	dup = malloc(sizeof(char) * strlen + 1);
	if (!dup)
		return (0);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}