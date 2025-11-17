/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:19:23 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/17 17:04:54 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		j = 0;
		if (to_find[j] == str[i])
		{
			while (str[i + j] && to_find[j] && to_find[j] == str[i + j])
			{
				j++;
			}
		}
		if (j == ft_strlen(to_find))
			return (str + i);
		else
			i++;
	}
	return (0);
}
