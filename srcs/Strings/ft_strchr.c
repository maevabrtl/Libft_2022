#include "includes/libft.h"

char    *strchr(const char *s, int c)
{
    size_t  i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    if (s[i] == c)
        return (&s[i]);
    return (NULL);
}
