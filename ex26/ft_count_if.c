/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 00:43:15 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/09 00:57:07 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	j;

	count = 0;
	j = 0;
	while (tab[j] != NULL)
	{
		if (f(tab[j]) == 1)
			count++;
		j++;
	}
	return (count);
}

// int	ft_str_is_lowercase(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] < 'a' || str[i] > 'z')
// 		{
// 			return (0);
// 		}
// 		else
// 			i++;
// 	}
// 	return (1);
// }

// int	main(void)
// {
// 	char *array[] = {"Apple", "banana", "pear", NULL};
// 	int	result;

// 	// Count how many strings start with 'A'
// 	result = ft_count_if(array, ft_str_is_lowercase);

// 	printf("Number of lowercase strings: %d\n", result);

// 	return (0);
// }