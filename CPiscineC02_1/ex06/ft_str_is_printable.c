/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:25:57 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/10 17:26:19 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_printable (str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d\n", ft_str_is_printable("aa"));
	printf("%d\n", ft_str_is_printable("prueba*"));
	printf("%d\n", ft_str_is_printable("aña"));
	return (0);
}
*/
