/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <imatakis@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:59:20 by imatakis          #+#    #+#             */
/*   Updated: 2024/02/15 20:48:04 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	t_itoa	itoa;

	itoa.len = ft_numlen(n);
	itoa.arr = malloc(itoa.len + 1);
	itoa.sign = 1;
	if (itoa.arr == NULL)
		return (NULL);
	if (n < 0)
	{
		itoa.arr[0] = '-';
		itoa.sign = -1;
	}
	else if (n == 0)
	{
		itoa.arr[0] = '0';
		itoa.arr[1] = '\0';
		return (itoa.arr);
	}
	itoa.arr[itoa.len--] = '\0';
	while (n != 0)
	{
		itoa.arr[itoa.len--] = ft_abs((n % 10) * itoa.sign) + '0';
		n /= 10;
	}
	return (itoa.arr);
}
