/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 08:07:37 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/19 15:50:01 by omlouk           ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		joined_size;

	joined_size = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc((joined_size + 1) * sizeof(char));
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
