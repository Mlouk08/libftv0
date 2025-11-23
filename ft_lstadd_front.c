/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 14:20:37 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/23 14:47:07 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int main()
// {
//     t_list *head = NULL;
//     t_list *node1;
//     t_list *node2;
//     // Create nodes
//     node1 = ft_lstnew("Hello");
//     node2 = ft_lstnew("World");
//     // Add nodes to front of list
//     ft_lstadd_front(&head, node1);  // head -> "Hello"
//     ft_lstadd_front(&head, node2);  // head -> "World" -> "Hello"
//     // Print list
// 	printf("%s\n", (char *)head->content);
// 	printf("%s\n", (char *)head->next->content);
//     return 0;
// }