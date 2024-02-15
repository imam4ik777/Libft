/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:33:40 by imatakis          #+#    #+#             */
/*   Updated: 2024/02/07 10:58:29 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

// int	main()
// {
// 	t_list *lst;
// 	t_list *lst1;
// 	t_list *lst2;

// 	lst = ft_lstnew("Hello");
// 	lst1 = ft_lstnew("World");
// 	lst2 = ft_lstnew(".");

// 	lst -> next = lst1;
// 	lst1 -> next = lst2;

// 	printf("%s\n", (char *)ft_lstlast(lst) -> content);
// }