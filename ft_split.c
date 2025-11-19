/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:19:56 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/19 10:53:49 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	numwords(char *str, char *charset)
{
	int	i;
	int	word_num;

	i = 0;
	word_num = 0;
	while (str[i] != 0)
	{
		if (in_set(str[i], charset) == 0)
			if (in_set(str[i + 1], charset) == 1 || str[i + 1] == 0)
				word_num++;
		i++;
	}
	return (word_num);
}

void	add_result(char *r_str, int start, int end, char *str)
{
	int	i;

	i = 0;
	while (start + i <= end)
	{
		r_str[i] = str[start + i];
		i++;
	}
	r_str[i] = 0;
}

void	alloc_str(char **result, int w_cur, int i, int start)
{
	result[w_cur] = (char *)malloc(sizeof(char) * (i - start + 2));
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		w_cur;
	int		start;

	result = (char **)malloc(sizeof(char *) * (numwords(str, charset) + 1));
	i = -1;
	w_cur = 0;
	start = 0;
	while (i++, str[i] != 0)
	{
		if (in_set(str[i], charset) == 1 || str[i] == 0)
			start = i + 1;
		if (in_set(str[i], charset) == 0)
		{
			if (in_set(str[i + 1], charset) == 1 || str[i + 1] == 0)
			{
				alloc_str(result, w_cur, i, start);
				add_result(result[w_cur], start, i, str);
				w_cur++;
			}
		}
	}
	result[w_cur] = 0;
	return (result);
}
