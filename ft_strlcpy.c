/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 04:38:46 by imatakis          #+#    #+#             */
/*   Updated: 2024/01/16 18:35:01 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t i = 0;

	if (dst[i] != '\0' && src[i] != '\0')
	{
		return NULL;
	}
	while (i < dstsize && dst[i] < src[i])
	{
		dst[i] = src[i];
		i++;
	}

	size_t len = ft_strlen(src);
	return (src);
}