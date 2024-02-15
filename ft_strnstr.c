/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 22:07:36 by imatakis          #+#    #+#             */
/*   Updated: 2024/02/14 20:13:02 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0' || haystack == needle)
		return ((char *)haystack);
	if (!len)
		return (NULL);
	i = ft_strlen(needle);
	while (*haystack && i <= len)
	{
		if (ft_strncmp(needle, haystack, i) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
