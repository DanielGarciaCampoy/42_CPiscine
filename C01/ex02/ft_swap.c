#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	b_original;

	b_original = *b;
	*b = *a;
	*a = b_original;
}

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("%d\n%d\n", a, b);
	return (0);
}
