/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:33:52 by imatakis          #+#    #+#             */
/*   Updated: 2024/02/14 20:10:06 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long		sign;
	long long	result;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == 45 && *str++)
		sign = -1;
	else if (*str == 43)
		str++;
	while (*str >= 48 && *str <= 57)
		result = result * 10 + (*str++ - 48);
	return (result * sign);
}
