#include <stdio.h>

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_uppercase(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("Prueba"));
	printf("%d\n", ft_str_is_uppercase("prueba"));
	printf("%d\n", ft_str_is_uppercase("PRUEBA"));
	printf("%d\n", ft_str_is_uppercase("prueba1"));
	printf("%d\n", ft_str_is_uppercase("prueba1-."));
	return (0);
}
