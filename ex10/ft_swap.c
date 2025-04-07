/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:20:43 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/04 14:25:24 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;

	printf("Original value of a: %d \n", a);
	
	ft_swap(&a, &b);

	printf("New value of a: %d", a);
}
*/