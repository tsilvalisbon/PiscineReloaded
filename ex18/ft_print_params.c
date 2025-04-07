/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:14:44 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/07 15:06:45 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*void ft_putchar(char c)
{
	write(1, &c, 1);
}*/
int	main(int argc, char **argv)
{
	int	j;
	int	i;

	j = 1;
	while (argc > j)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar ('\n');
		j++;
	}
}
