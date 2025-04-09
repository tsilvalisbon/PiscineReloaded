/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:11:43 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/07 15:24:42 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb >= i)
	{
		result *= i;
		i++;
	}
	return (result);
}

/* #include <stdio.h>
int main()
{
	int nb = 13;
	printf("The factorial of %d is: %d\n", nb, ft_iterative_factorial(nb));
} */
