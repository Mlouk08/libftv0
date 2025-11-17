/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:54:55 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/17 15:04:23 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	temp;

	i = ft_strlen(s);
	while (str[i])
	{
		if (str[i] == c)
			return (str[i]);
		i--;
	}
	if (str[i] == c)
		return (str[i]);
	return (NULL);
}
