#include "includes/libft.h"

char	*strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = strlen(s1) + 1;
	s2 = malloc(sizeof(char) * len);
	if (!s2)
		return (NULL);
	while (len >= 0)
	{
		s2[len] = s1[len];
		len--;
	}
	return (s2);
}
