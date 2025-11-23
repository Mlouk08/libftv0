/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 23:09:14 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/22 18:39:29 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*s1;

	i = 0;
	len = ft_strlen(s);
	s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (s1 == NULL)
		return (NULL);
	while (i < len)
	{
		s1[i] = s[i];
		i ++;
	}
	s1[i] = '\0';
	return (s1);
}
