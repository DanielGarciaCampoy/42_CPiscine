#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int num;

	i = nb - 1;
	// printf("Numero i:%d\n", i);
	num = nb;
	while (i > 0)
	{
		// printf("Multiplicacion:%d*%d\n", num, i);
		num *= i;
		i--;
	}
	return (num);
}

int	main(void)
{
	int resultado = ft_iterative_factorial(6);

	printf("%d\n", resultado);
	return (0);
}
