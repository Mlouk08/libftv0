/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:19:09 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/19 10:53:22 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13) || c == 160)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	flag;

	flag = 1;
	nb = 0;
	i = 0;
	while (ft_isspace(str[i]) && str[i] != '\0')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (flag * nb);
}
