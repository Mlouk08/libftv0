/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:22:38 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/19 10:59:27 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	sym;

	ptr = (char *)s;
	sym = (char)c;
	while (*ptr && !(*ptr == sym))
		ptr++;
	return ((*ptr == sym) ? ptr : NULL);
}
