/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:26:33 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/04 14:32:07 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
	int a = 11;
	int b = 2;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Division result: %d \n", div);
	printf("Modulum result: %d \n", mod);
}*/