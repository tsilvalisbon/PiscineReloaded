/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 00:20:18 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/09 00:36:57 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:54:38 by andcarva          #+#    #+#             */
/*   Updated: 2024/10/24 14:06:08 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
// #include <unistd.h>
// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	unsigned int	number;

// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		number = nb * -1;
// 	}
// 	else
// 		number = nb;
// 	if (number >= 10)
// 		ft_putnbr(number / 10);
// 	ft_putchar(number % 10 + 48);
// }
// int	main(void)
// {
// 	int	tab[] = {42, 24, -42, -24, 9};
// 	int	length = 5;

// 	ft_foreach(tab, length, ft_putnbr);
// 	ft_putchar('\n');

// 	return (0);
// }