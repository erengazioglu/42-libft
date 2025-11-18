/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 03:15:30 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/18 18:57:39 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;

	if (!lst)
		return (NULL);
	// printf("===\n=== lstmap start\n");
	// printf("content: %s\n", (char *) lst->content);
	// printf("cb(content): %s\n", (char *) f(lst->content));
	new_lst = ft_lstnew(lst->content);
	if (!new_lst)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}

// tests

// static void	del_node(void *lst)
// {
// 	if (((t_list *)lst)->content)
// 		free(((t_list *)lst)->content);
// 	free(lst);
// }

// static void	*str_uppercase(void *ptr)
// {
// 	char	*str = (char *)ptr;

// 	while (*str)
// 	{
// 		*str = ft_toupper(*str);
// 		str++;
// 	}
// 	return (ptr);
// }

// int	main(void)
// {
// 	t_list	*lst = ft_lstnew(ft_strdup("hello"));
// 	t_list	*node;
// 			// t_list	*l = lstnew(strdup(" 1 2 3 "));
// 			// t_list	*ret;

// 			// l->next = lstnew(strdup("ss"));
// 			// l->next->next = lstnew(strdup("-_-"));


// 	lst->next = ft_lstnew(ft_strdup("hiya"));
// 	lst->next->next = ft_lstnew(ft_strdup("-_-"));

// 	printf("content: %s\n", (char *) lst->content);
// 	printf("content: %s\n", (char *) lst->next->content);
// 	ft_lstmap(lst, str_uppercase, del_node);
// 	printf("modded content: %s\n", (char *) lst->content);
// 	printf("modded content: %s\n", (char *) lst->next->content);
// 	printf("modded content: %s\n", (char *) lst->next->next->content);


// }