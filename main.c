/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:41:44 by imatakis          #+#    #+#             */
/*   Updated: 2024/01/11 21:32:22 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2);

size_t	arrlen(char **arr)
{
	size_t		count;
	const char	*str = *arr;

	count = 0;
	while (*arr != NULL)
	{
		while (*str != '\0')
		{
			count++;
			str++;
		}
		arr++;
	}
	return (count);
}
*/
// int	main(int argc, char **argv)
// {
// 	char	**building;
// 	int		i;

// 	(void)argc;
// 	(void)argv;
// 	i = 0;
// 	int x = 0;
// 	building[x] = "0012";
// 	x++;
// 	building[x] = "0023";
// 	x++;
// 	building[x] = "0034";
// 	x++;
// 	while (i < x)
// 	{
// 		printf("%s\n", building[i]);
// 		i++;
// 	}
// char *str = "abcd";
// int	i = 0;
// while (str[i])
// {
// 	printf("%d", str[i]);
// 	i++;
// }
// printf("%c\n", building[0][3]);
// printf("%c\n", building[1][3]);
// printf("%c\n", building[2][3]);
// if (argc == 2)
// {
// 	// printf("Original = %d\n", strcmp(av[1], av[2]));
// 	// printf("My one = %d\n", ft_strcmp(av[1], av[2]));
// 	if (ft_strcmp(argv[1], "./a.out") == 0)
// 		printf("correct");
// 	else
// 		printf("wrong");
// }
// }

#include "libft.h"

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		char *str = av[1];
// 		ft_bzero(av[1], atoi(av[2]));
// 		printf("%s\n", av[1]);
// 		bzero(str, atoi(av[2]));
// 		printf("%s\n", str);
// 	}
// }

// int	main(void)
// {
// char	dst[] = "012345";
// char	src[] = "aaabbb";

// printf("%s\n", str);
// memset(str, 'a', 3);
// printf("%s\n", str);
// ft_memset(str1, 'a', 3);
// printf("%s\n", str1);
// ft_memcpy(dst, src, 3);
// printf("My function: %s\n", dst);
// char dst1[] = "012345";
// char src1[] = "aaabbb";
// memcpy(dst1, src1, 3);
// printf("original function: %s\n", dst);
// const int x = 10;
// printf("%d\n", x);
// // int y = x;
// int y = x;
// y = 0;
// printf("%d\n", y);
// }
/*#include <stdio.h>
#include <stdlib.h>

void	do_op(int ac, char **av)
{
	int	x;
	int	y;
	int	result;

	if (ac == 4)
	{
		x = atoi(av[1]);
		y = atoi(av[3]);
		result = 0;
		if (av[2][0] == '+')
			result = x + y;
		else if (av[2][0] == '-')
			result = x - y;
		else if (av[2][0] == '*')
			result = x * y;
		else if (av[2][0] == '/')
		{
			if (y == 0 || x == 0)
			{
				printf("Error: Zero not divided\n");
				return ;
			}
			result = x / y;
		}
		printf("%d %c %d = %d\n", x, av[2][0], y, result);
	}
}

int	main(int ac, char **av)
{
	do_op(ac, av);
	return (0);
}

int	main(char *s1, char *s2, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		s1[i] && s1[i] == s2[i];
		i++;
	}
}
*/

// int	main(int ac, char **av)
// {
// 	void	*b;

// 	if (ac == 4)
// 	{
// 		printf("%s\n", av[1]);
// 		b = (void *)av[1];
// 		ft_memset(b, av[2][0], atoi(av[3]));
// 		printf("%s\n", (char *)b);
// 	}
// }

//            0  1  2  3  4                0++ 1++ 2++ == len
//	ptr[i] = [c][c][c][d][e] = c = [c] i = 0 < len = 3
//				loop stoped
//	return (ptr);

/*
int	main(void)
{
	char str[] = "1234567";
	char str1[] = "1234567";

	ft_memset(str, 'a', 3);
	printf("My function: %s\n", str);
	memset(str1, 'a', 3);
	printf("Original function: %s\n", str1);
}*/

int	main(void)
{
	// char	*str1 = av[1];
	// if (ac == 4)
	// {
	// 	ft_memmove(av[1], av[2], atoi(av[3]));
	// 	printf("%s\n", av[1]);
	// 	memmove(str1, av[2], atoi(av[3]));
	// 	printf("%s\n", str1);
	// }
	char str[] = "Hello, World!";
	char str1[] = "Hello, World!";
	char str2[] = "Hello, World!";
	// Overlapping case: Copy part of the string to a position within the same string
	memmove(str + 7, str + 1, 5);
	ft_memmove(str1 + 7, str1 + 1, 5);
	ft_memcpy(str2 + 7, str2 + 1, 5);
	printf("memove %s\n", str);
	printf("ft_memove %s\n", str1);
	printf("memcpy %s\n", str2);
	return (0);
}