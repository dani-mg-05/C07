/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:13:52 by damedina          #+#    #+#             */
/*   Updated: 2023/07/24 12:04:08 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(size * sizeof (int));
	if (array == 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*array;
	int	min;
	int	max;
	int	i;

	min = 3;
	max = 9;
	printf("%d\n", ft_ultimate_range(&array, min, max));
	i = 0;
	if (array != 0)
	{
		while (array[i])
		{
			printf("%d ", array[i]);
			i++;
		}
		free(array);
		return (0);
	}
}
*/
