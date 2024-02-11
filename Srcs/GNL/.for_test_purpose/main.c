#include "../../../Includes/get_next_line.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*line;

	(void)ac;
	(void)av;
	fd = open(".for_test_purpose/test", O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "open didnt work\n");
		return (0);
	}
	line = get_next_line(fd);
	while (line != NULL)
	{
		dprintf(1, "|%s|", line);
		free(line);
		line = get_next_line(fd);
	}
	dprintf(1, "|%s|", line);
	free(line);
	close(fd);
	return (0);
}
