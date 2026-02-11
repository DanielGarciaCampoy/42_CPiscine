/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:45:59 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/11 20:05:13 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_strcmp("primera prueba", "segunda prueba"));
	printf("%d\n", ft_strcmp("testeo", "testeo"));
	printf("%d\n", ft_strcmp("AAA", "aaa"));
	printf("%d\n", ft_strcmp("abb", "aBB"));
	return (0);
}
*/
