/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:57:52 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/17 13:44:31 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (ft_strlen(dst))
	{
		while (i < size - 1)
		{
			dst[i] = src[i];
		}
		if (size > 0)
			dst[i] = '\0';
	}
	return (ft_strlen(src));
}
