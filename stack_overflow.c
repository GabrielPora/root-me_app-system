#include <string.h>
#include <stdio.h>

void	foo(void)
{
	char    buff[16] = {0};	
	buff[0] = 'A';
	buff[1] = 'A';
	buff[2] = 'A';
	buff[3] = 'A';
	(void)buff;
}

int	main(int __attribute__((unused))ac, const char **av)
{
	int		value;
	char	buff[16] = {0};	
	
	value = 0;
	strcpy(buff, av[1]);
	if (value != 0)
		dprintf(1, "WIN %d\n", value);
	else
		dprintf(1, "Try again\n");
	foo();
	return (0);
}
