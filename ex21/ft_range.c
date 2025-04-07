/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:52:24 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/07 17:00:45 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	else
		range = malloc(sizeof(int) * (max - min));
	while (min != max)
	{
		range[i] = min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;

	arr = ft_range(5,10);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/