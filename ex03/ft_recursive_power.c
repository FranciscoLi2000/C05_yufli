#include <unistd.h>
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
#include <stdio.h>
int	main()
{
	int	base;
	int	i;

	base = 2;
	i = 0;
	while (i < 10)
	{
		printf("%i\n", ft_recursive_power(base, i));
		i++;
	}
	return (0);
}
