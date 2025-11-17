/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:07:45 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/17 17:03:31 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	t;
	int				i;

	t = c;
	i = 0;
	while (s[i] && i < n)
	{
		if (s[i] == t)
			return (s[i]);
		i++;
	}
	return (NULL);
}
