#include <stdio.h>

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowercase(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("Prueba"));
	printf("%d\n", ft_str_is_lowercase("prueba"));
	printf("%d\n", ft_str_is_lowercase("PRUEBA"));
	printf("%d\n", ft_str_is_lowercase("prueba1"));
	printf("%d\n", ft_str_is_lowercase("prueba1-."));
	return (0);
}
