#include "includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	newstr = malloc(sizeof(char) * len);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (s && s[start] && i < len)
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	return (newstr);
}
