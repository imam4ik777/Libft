/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:02:59 by imatakis          #+#    #+#             */
/*   Updated: 2024/01/21 22:44:35 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*str;

	if (size && SIZE_MAX / size < count)
		return (NULL);
	total = count * size;
	str = malloc(total);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, total);
	return (str);
}
