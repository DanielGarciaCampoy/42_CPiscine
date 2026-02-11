/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:13:37 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/10 17:14:14 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowercase(str[i]) || is_uppercase(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("prueba"));
	printf("%d\n", ft_str_is_alpha("prueba1"));
	printf("%d\n", ft_str_is_alpha("prueba1-."));
	return (0);
}
*/
