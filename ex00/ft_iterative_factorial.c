#include <unistd.h>
int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	factorial = 1;
	if (nb < 0)
		return (0);
	i = 1;
	while (i <= nb)
	{
		factorial = i * factorial;
		i++;
	}
	return (factorial);
}
#include <stdio.h>
int	main()
{
	int	n;

	printf("Number: ");
	scanf("%i", &n);
	printf("%i\n", ft_iterative_factorial(n));
	return (0);
}
