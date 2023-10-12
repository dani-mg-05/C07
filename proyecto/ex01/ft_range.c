/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:40:23 by damedina          #+#    #+#             */
/*   Updated: 2023/07/20 20:01:19 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	array = (int *)malloc(size * sizeof (int));
	i = 0;
	while (i < size)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;

	min = 3;
	max = 9;
	array = ft_range(min, max);
	i = 0;
	if (array != 0)
	{
		while (i < 6)
		{
			printf("%d ", array[i]);
			i++;
		}
		return (0);
	}
}*/
