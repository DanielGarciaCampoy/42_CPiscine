/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:08:46 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/11 20:09:41 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_strncmp("primera prueba", "segunda prueba", 4));
	printf("%d\n", ft_strncmp("abb", "aBB", 1));
	printf("%d\n", ft_strncmp("abb", "aBB", 3));
	return (0);
}
*/
