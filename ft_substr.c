/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 07:34:14 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/19 09:54:04 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((size_t)start > len)
	{
		temp = malloc(1);
		if (temp == NULL)
			return (NULL);
		temp[0] = '\0';
		return (temp);
	}
	temp = ft_calloc((len + 1), sizeof(char));
	if (temp == NULL)
		return (NULL);
	while (start < (unsigned int)len)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	return (temp);
}
