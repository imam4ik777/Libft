/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <imatakis@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:49:47 by imatakis          #+#    #+#             */
/*   Updated: 2024/02/19 18:01:03 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	if (!s || !f)
		return ;
	i = ft_strlen(s);
	while (j < i)
	{
		(*f)(j, s);
		s++;
		j++;
	}
}
