#include <unistd.h>
/*int	ft_sqrt(int nb) // use the binary search
{
	double	high;
	double	low;
	double	mid;
	double	epsilon;

	if (nb < 0)
		return (-1);
	low = 0;
	high = (double)nb;
	epsilon = 0.000001;
	while (high - low > epsilon)
	{
		mid = (low + high) / 2;
		if (mid * mid > (double)nb)
			high = mid;
		else
			low = mid;
	}
	return ((low + high) / 2);
}*/
int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			break ;
		i++;
	}
	return (0);
}
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("number=%s\tsquare root=%.2f\n", argv[1], (float)ft_sqrt((float)atoi(argv[1])));
	return (0);
}
