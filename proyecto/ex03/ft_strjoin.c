/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:28 by damedina          #+#    #+#             */
/*   Updated: 2023/07/24 18:14:28 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*str_malloc(int size)
{
	char	*str;

	str = (char *)malloc((1 + size) * sizeof(char));
	str[size] = '\0';
	return (str);
}

int	strs_len(char **strs, int size)
{
	int	i;
	int	j;
	int	counter;

	counter = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			counter++;
			j++;
		}
		i++;
	}
	return (counter);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	while (sep[i])
		i++;
	if (size <= 0)
		return (str_malloc(0));
	k = strs_len(strs, size);
	str = str_malloc((size - 1) * i + k);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			str[k++] = sep[j++];
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"Patata", "patatilla", "patatota"};

	printf("%s\n", ft_strjoin(3, strs, ", "));
	return (0);
}
*/
