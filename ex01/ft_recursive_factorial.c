#include <unistd.h>
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
#include <stdio.h>
int	main()
{
	int	n;

	printf("Number: ");
	scanf("%d", &n);
	printf("%llu\n", (unsigned long long)ft_recursive_factorial(n));
	return (0);
}
