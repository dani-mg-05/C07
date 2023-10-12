/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:25:41 by damedina          #+#    #+#             */
/*   Updated: 2023/07/20 15:44:31 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		indice;

	indice = 0;
	while (*(src + indice) != '\0')
	{
		*(dest + indice) = *(src + indice);
		indice++;
	}
	*(dest + indice) = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	char	*ptr;
	int		longitud;

	ptr = str;
	longitud = 0;
	while (*ptr != '\0')
	{
		longitud++;
		ptr++;
	}
	return (longitud);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;

	size = ft_strlen(src);
	dest = (char *)malloc(size * sizeof (char));
	if (dest == 0)
		return (0);
	else
		return (ft_strcpy(dest, src));
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	cadena[] = "Patataaaaaaaaaaaaaaaa";
	char	*resultado;
	char	*resultado2;

	resultado = strdup(cadena);
	resultado2 = ft_strdup(cadena);
	printf("%s\n", cadena);
	printf("%s\n", resultado);
	printf("%s\n", resultado2);
	return (0);
}
*/
