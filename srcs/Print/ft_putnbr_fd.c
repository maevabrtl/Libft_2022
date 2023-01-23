#include "includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	if (str == NULL)
		return (NULL);
	ft_putstr_fd(str, fd);
}
