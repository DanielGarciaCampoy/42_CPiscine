/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 21:03:35 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/11 21:04:23 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	e;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	e = 0;
	while (e < nb)
	{
		dest[i] = src[e];
		i++;
		e++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	destino[] = "hola ";
	char	origen[] = "mundo";

	printf("%s\n", ft_strncat(destino, origen, 3));
	return (0);
}
*/
