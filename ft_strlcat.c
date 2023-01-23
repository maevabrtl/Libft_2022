#include "includes/libft.h"

size_t	strlcat(char *dst, const char *src, size_t maxlen)
{
	size_t	srclen;
	size_t	dstlen;

	if (!dst || !src)
		return (0);
	srclen = ft_strlen(src);
	dstlen = 0;
	while (dst[dstlen] && dstlen < maxlen)
		dstlen++;
	if (dstlen == maxlen)
		return (dstlen + srclen);
	if (srclen < maxlen - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, maxlen - dstlen - 1);
		dst[maxlen - 1] = '\0';
	}
	return (dstlen + srclen);
}
