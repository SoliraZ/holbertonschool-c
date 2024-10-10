#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	n;

	n = 0;
	if (argc > 2)
	{
		write(1, "Nombre d'arguments trop grand !", 31);
		return (1);
	}
	if (argc < 2)
	{
		write(1, "Nombre d'argments trop petit !", 30);
		return (1);
	}
	while (argv[1][n] != '\0')
	{
		ft_putchar(argv[1][n]);
		n++;
	}
	return (0);
}
