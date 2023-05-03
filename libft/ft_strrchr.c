
#include "pipex.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s)
		s++;
	while (str <= s)
	{
		if (*s == (char)c)
			return (s);
		s--;
	}
	return (NULL);
}