/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:15:59 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/08 19:23:21 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	n;

	n = 1;
	if (nb <= 0)
		return (0);
	while (n <= nb)
	{
		if ((n * n) > 2147483647)
			return (0);
		if ((n * n) == nb)
			return (n);
		n++;
	}
	return (0);
}

// #include <stdio.h>

//  int	main(void)
// {
//  		int nb = 111739321;
		// printf("The square root of %d is: %d\n", nb, ft_sqrt(nb));
// }
