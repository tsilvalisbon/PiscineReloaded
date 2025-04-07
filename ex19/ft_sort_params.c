/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:51:58 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/07 15:47:57 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_string(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_stringcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swapper(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 1;
	while (i < argc)
	{
		c = i + 1;
		while (c < argc)
		{
			if (ft_stringcmp(argv[i], argv[c]) > 0)
			{
				ft_swapper(&argv[i], &argv[c]);
			}
			c++;
		}
		i++;
	}
	c = 1;
	while (c < argc)
	{
		ft_string(argv[c]);
		ft_putchar('\n');
		c++;
	}
}
