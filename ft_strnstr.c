#include "includes/libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (!needle || *needle == '\0')
		return (haystack);
	while (haystack[i] && (len > 0))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
			j++;
		if (!needle[j])
			return (&haystack[i]);
		i++;
		len--;
	}
	return (NULL);
}
