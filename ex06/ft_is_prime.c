#include <unistd.h>
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i = i + 6;
	}
	return (1);
}
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		printf("%i\t%i\n", n, ft_is_prime(n));
	}
	return (0);
}
