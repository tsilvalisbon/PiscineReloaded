/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:38:11 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/07 16:48:19 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		length;

	length = ft_strlen(src);
	dest = malloc((length + 1) * sizeof(char));
	if (src == NULL)
	{
		return (NULL);
	}
	else
		ft_strcpy(dest, src);
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Twenty One";
	char	*dest = ft_strdup(src);

	printf("Original: %s\n", src);
	printf("Duplicate: %s\n", dest);
	free(dest);
}*/