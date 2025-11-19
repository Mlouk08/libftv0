/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 22:33:10 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/19 10:52:56 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s1;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	s1 = malloc(nmemb * size);
	if (s1 == NULL)
		return (NULL);
	ft_memset((unsigned char *)s1, 0, nmemb * size);
	return (0);
}
