/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:22:59 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/10 17:23:30 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
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
*/
