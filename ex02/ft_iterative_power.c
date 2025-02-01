#include <unistd.h>
int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
#include <stdio.h>
int	main()
{
	int	base;
	int	i;

	base = 2;
	while (i < 10)
	{
		printf("base=%i\tpower=%i\t%i\n", base, i, ft_iterative_power(base, i));
		i++;
	}
	return (0);
}
