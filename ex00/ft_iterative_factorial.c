#include <unistd.h>
int	ft_iterative_factorial(int nb)
{
	unsigned long long	result;
	int			i;

	result = 1;
	if (nb < 0)
		return (0);
	i = 1;
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return ((unsigned long long)result);
}
#include <stdio.h>
int	main()
{
	int	n;

	printf("Number: ");
	scanf("%d", &n);
	printf("%u\n", ft_iterative_factorial(n));
	return (0);
}
