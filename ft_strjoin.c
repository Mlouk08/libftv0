/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 08:07:37 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/19 10:21:07 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (*(dest + j))
	{
		j++;
	}
	while (*(src + i))
	{
		*(dest + j) = *(src + i);
		j++;
		i++;
	}
	*(dest + j) = '\0';
	return (dest);
}

int	ft_size_nxt(int size, char **strs, char *sep)
{
	int		i;
	int		joined_size;

	i = 0;
	joined_size = 0;
	while (i < size)
	{
		joined_size += ft_strlen(strs[i]);
		i++;
	}
	joined_size += (size - 1) * ft_strlen(sep);
	return (joined_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;
	int		i;
	int		joined_size;

	i = 0;
	if (size <= 0)
	{
		joined = (char *)malloc(1);
		joined[0] = '\0';
		return (joined);
	}
	joined_size = ft_size_nxt(size, strs, sep);
	joined = (char *)malloc((joined_size + 1) * sizeof(char));
	while (joined_size-- >= 0)
		joined[joined_size] = '\0';
	while (i < size)
	{
		joined = ft_strcat (joined, strs[i]);
		if (i != size - 1)
			joined = ft_strcat(joined, sep);
		i++;
	}
	return (joined);
}
