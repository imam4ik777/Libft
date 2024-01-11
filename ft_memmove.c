/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:31:09 by imatakis          #+#    #+#             */
/*   Updated: 2024/01/11 21:33:22 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst1 == NULL && src1 == NULL)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst1, src1, len);
	else
	{
		while (len--)
		{
			dst1[len] = src1[len];
		}
	}
	return (dst1);
}
