/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia- <dgarcia-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:51:03 by dgarcia-          #+#    #+#             */
/*   Updated: 2026/02/11 20:51:22 by dgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	e;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	e = 0;
	while (src[e] != '\0')
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
	char	destino[20] = "hola ";
	char	origen[] = "mundo";

	printf("%s\n", ft_strcat(destino, origen));
	return (0);
}
*/
