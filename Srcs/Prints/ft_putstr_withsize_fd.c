#include "../../Includes/libft.h"

int	ft_putstr_withsize_fd(char *to_print, int fd, int size_to_print)
{
	int	r_write;

	r_write = write(fd, to_print, size_to_print);
	return (r_write);
}
