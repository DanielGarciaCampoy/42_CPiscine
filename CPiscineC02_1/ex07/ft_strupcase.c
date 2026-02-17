/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:27:51 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/10 17:28:21 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowercase(str[i]))
			str[i] = str[i] - 32;
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

	printf("%s\n", ft_strupcase(c));
	printf("%s\n", ft_strupcase(c1));
	printf("%s\n", ft_strupcase(c2));
	printf("%s\n", ft_strupcase(c3));
	return (0);
}
*/
