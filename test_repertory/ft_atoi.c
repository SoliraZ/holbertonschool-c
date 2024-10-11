#include <stdio.h>

int	ft_atoi(char *argv)
{
	int	n;
	int	negative;
	int	result;

	n = 0;
	negative = 1;
	result = 0;
	while((argv[n] >= 9 && argv[n] <= 13 ) || argv[n] == 32)
		n++;
	while(argv[n] == '+' || argv[n] == '-')
	{
		if (argv[n] == '-')
			negative = negative * -1;
		n++;
	}
	while(argv[n] >= '0' && argv[n] <= '9')
	{
		result = (result * 10) + (argv[n] - 48);
		n++;
	}
	return (result * negative);
}

int	main(void)
{
	char	argv[] = "   \t \f -+++-1234abc567";

	printf("%i", ft_atoi(argv));
	return (0);
}
