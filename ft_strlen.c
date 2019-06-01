/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:19:01 by camurray          #+#    #+#             */
/*   Updated: 2019/05/28 12:12:09 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** finds the length of a string
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_strlen.c ft_putstr.c ft_putchar.c
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
** int		main(void)
** {
**	ft_putstr("\033[36mTest 1: input \"1\"\n\033[0m");
**	printf("%lu\n", strlen("1"));
**	printf("%zu\n", ft_strlen("1"));
**	ft_putstr("\033[36mTest 2: input \"11\"\n\033[0m");
**	printf("%lu\n", strlen("11"));
**	printf("%zu\n", ft_strlen("11"));
**	ft_putstr("\033[36mTest 3: input \"111\"\n\033[0m");
**	printf("%lu\n", strlen("111"));
**	printf("%zu\n", ft_strlen("111"));
**	ft_putstr("\033[36mTest 4: input \"1111\"\n\033[0m");
**	printf("%lu\n", strlen("1111"));
**	printf("%zu\n", ft_strlen("1111"));
**	ft_putstr("\033[36mTest 5: input \"11111\"\n\033[0m");
**	printf("%lu\n", strlen("11111"));
**	printf("%zu\n", ft_strlen("11111"));
**	ft_putstr("\033[36mTest 6: input \"111111\"\n\033[0m");
**	printf("%lu\n", strlen("111111"));
**	printf("%zu\n", ft_strlen("111111"));
**	ft_putstr("\033[36mTest 7: input \"1111111111\"\n\033[0m");
**	printf("%lu\n", strlen("1111111111"));
**	printf("%zu\n", ft_strlen("1111111111"));
**	ft_putstr("\033[36mTest 8: input \"111111111111111
**	11111\"\n\033[0m");
**	printf("%lu\n", strlen("1111111111111111111111111"));
**	printf("%zu\n", ft_strlen("1111111111111111111111111"));
**	ft_putstr("\033[36mTest 9: input \"\"\n\033[0m");
**	printf("%lu\n", strlen(""));
**	printf("%zu\n", ft_strlen(""));
**	ft_putstr("\033[36mTest 10: input \"111111111111
**	111111111111111111\"\n\033[0m");
**	printf("%lu\n", strlen("111111111111111111111111111111"));
**	printf("%zu\n", ft_strlen("111111111111111111111111111111"));
**	ft_putstr("\033[36mTest 11: input \"1111111111111111111111111
**	111111111111111111111111111111111111\"\n\033[0m");
**	printf("%lu\n", strlen("111111111111111111111111111111111111111
**	1111111111111111111111"));
**	printf("%zu\n", ft_strlen("111111111111111111111111111
**	1111111111111111111111111111111111"));
**	ft_putstr("\033[36mTest 12: input \"111111111111111111111111111111
**	1111111111111111111111111111111111111111111
**	111111111111111111\"\n\033[0m");
**	printf("%lu\n", strlen("111111111111111111111111111111111111
**	1111111111111111111111111111111111111111111111111111111"));
**	printf("%zu\n", ft_strlen("11111111111111111111111111111111
**	11111111111111111111111111111111111111111111111111111111111"));
**	ft_putstr("\033[36mTest 13: input \"111111111111111111111111111
**	11111111111111111111111111111111111111111111111111111111111111
**	11111111111111111111111111111111\"\n\033[0m");
**	printf("%lu\n", strlen("11111111111111111111111111111111111111
**	11111111111111111111111111111111111111111111111111111111111111111
**	111111111111111111"));
**	printf("%zu\n", ft_strlen("11111111111111111111111111111111111
**	11111111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111"));
**	ft_putstr("\033[36mTest 14: input \"11111111111111111111111111111
**	11111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111111111111\"\n\033[0m");
**	printf("%lu\n", strlen("1111111111111111111111111111111111111111
**	1111111111111111111111111111111111111111111111111111111111111111
**	1111111111111111111111111111111111111111111111111111111111111111
**	111111111111"));
**	printf("%zu\n", ft_strlen("1111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111111
**	1111111111111111111111111111111111111111111111111111111111111111
**	11111111111111"));
**	ft_putstr("\033[36mTest 15: input \"111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111
**	1111111111111111111111\"\n\033[0m");
**	printf("%lu\n", strlen("111111111111111111111111111111111111111
**	11111111111111111111111111111111111111111111111111111111111111111
**	1111111111111111111111111111111111111111111111111111111111111111
**	1111111111111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111111"));
**	printf("%zu\n", ft_strlen("111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111111111
**	1111111111111111111111111111111111111111111111111111111111111111"));
**	ft_putstr("\033[36mTest 16: input \"111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111
**	11111111111111111111111111111111111111111111111111111111111111
**	1111111111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111111
**	11111111111111111111111111111111111111111111111111111111111111111
**	11111111111111\"\n\033[0m");
**	printf("%lu\n", strlen("1111111111111111111111111111111111111111
**	11111111111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111111
**	11111111111111111111111111111111111111111111111111111111111111111
**	11111111111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111"));
**	printf("%zu\n", ft_strlen("111111111111111111111111111111111111
**	1111111111111111111111111111111111111111111111111111111111111111
**	1111111111111111111111111111111111111111111111111111111111111111
**	11111111111111111111111111111111111111111111111111111111111111111
**	111111111111111111111111111111111111111111111111111111111111111
**	1111111111111111111111111111111111111111111111111111111111111
**	11111111"));
**}
*/
