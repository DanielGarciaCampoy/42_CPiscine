/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:54:23 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/10 19:55:33 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (is_lowercase(str[i]))
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && is_lowercase(str[i + 1]))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(c));
	return (0);
}
*/
