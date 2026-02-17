/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:18:00 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/10 17:18:21 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_numeric (str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d\n", ft_str_is_numeric("1234"));
	printf("%d\n", ft_str_is_numeric("1234a"));
	printf("%d\n", ft_str_is_numeric("1234.-"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}
*/
