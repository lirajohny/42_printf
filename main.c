#include <stdio.h>
#include "ft_printf.h"


int	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("usage: %s <TYPE> <argument> %s s test \n", av[0], av[0]);
		return (1);
	}
	
	if (*av[1] == 'c')
	{
		char c = *av[2];
		printf("original: 1, 2, 3, -d test, testing, 0.4s sound, 1, 2, 3xp, sound, -*dtest\n");
		ft_printf("function: 1, 2, 3, -d test, testing, 0.4s sound, 1, 2, 3xp, sound, -*dtest\n");

		printf("original: %c\n", 0);
		ft_printf("function: %c\n", 0);

		printf("original: %c\n", c);
		ft_printf("function: %c\n", c);

		printf("original: %c\n", '0');
		ft_printf("function: %c \n", '0');

		printf("original: %c\n", '0' - 256);
		ft_printf("function:  %c\n", '0' - 256);

		printf("original: %c \n", '0' + 256);
		ft_printf("function: %c \n", '0' + 256);

		printf("originai err %c %c %c \n", '0', 0, '1');
		ft_printf("function: err %c %c %c \n", '0', 0, '1');

		printf("original: %c %c %c \n", ' ', ' ', ' ');
		ft_printf("function:  %c %c %c \n", ' ', ' ', ' ');

		printf("original: %c %c %c \n", '1', '2', '3');
		ft_printf("function:  %c %c %c \n", '1', '2', '3');

		printf("original: %c %c %c \n", '2', '1', 0);
		ft_printf("function:  %c %c %c \n", '2', '1', 0);

		printf("original: %c %c %c \n", 0, '1', '2');
		ft_printf("function:  %c %c %c \n", 0, '1', '2');
	}
	if (*av[1] == 's')
	{
		char *s = av[2];
		printf("original output: %s\n", s);
		ft_printf("function: %s\n", s);
	}
	return (0);
}
