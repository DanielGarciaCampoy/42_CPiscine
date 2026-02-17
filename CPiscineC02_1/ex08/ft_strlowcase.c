/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:33:28 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/10 19:38:10 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_uppercase(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	c[] = "prueba";
	char	c1[] = "Prueba";
	char	c2[] = "PRUEBA";
	char	c3[] = "prue112";

	printf("%s\n", ft_strlowcase(c));
	printf("%s\n", ft_strlowcase(c1));
	printf("%s\n", ft_strlowcase(c2));
	printf("%s\n", ft_strlowcase(c3));
	return (0);
}
*/
