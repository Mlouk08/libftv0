/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:21:33 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/17 13:52:08 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//check without malloc
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	int				i;

	i = 0;
	temp = (unsigned char *)malloc(n * sizeof(unsigned char));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (i < n && src[i])
	{
		temp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < n && temp[i])
	{
		dest[i] == temp[i];
		i++;
	}
}
