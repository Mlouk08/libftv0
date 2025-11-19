/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 08:05:11 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/19 14:45:12 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_len(long n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*temp;
	int		flag;
	size_t	size;
	long	nb;

	nb = (long)n;
	flag = 0;
	if (nb < 0)
	{
		nb = -nb;
		flag = 1;
	}
	size = get_len(nb) + flag;
	temp = (char *)malloc(sizeof(char) * (size + 1));
	temp[size--] = '\0';
	while (size)
	{
		temp[size--] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (n < 0 && size == 0)
		temp[size] = '-';
	else
		temp[size] = nb % 10 + '0';
	return (temp);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s", ft_itoa(0));
// 	return 1;
// }