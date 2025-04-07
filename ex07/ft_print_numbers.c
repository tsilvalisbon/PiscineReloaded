/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 12:04:09 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/04 14:16:56 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*void ft_putchar(char c)
{
	write(1, &c, 1);
}*/
void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}
/*int main()
{
	ft_print_numbers();
}*/