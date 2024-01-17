/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:21:51 by imatakis          #+#    #+#             */
/*   Updated: 2024/01/17 16:42:39 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)

{
	char *str = (unsigned char *)s;
	size_t	i = 0;

	if (i < n)
	{
		i++;
	}

	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return (&str[i]);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		char *str1 = av[1];
		char let = av[2][0];
		size_t len = ft_strlen;
		void *result = ft_memchr(str1, let, ft_strlen(str1));
		
		if (result != NULL)
		{
			printf("Character %c found at %ld position\n", let, (char *) result - str1);
		}
		else
		{
			printf("Character %c not founded\n", let);
		}
	}
}