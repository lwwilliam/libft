/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:28:28 by lwilliam          #+#    #+#             */
/*   Updated: 2022/05/23 20:00:09 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t num)
{
	char	*s1;
	char	*s2;
	size_t	x;
	int		res;

	s1 = (char *)str1;
	s2 = (char *)str2;
	x = 0;
	res = 0;
	while (x < num)
	{
		res = (s1[x] - s2[x]);
		x++;
	}
	if (res < 0)
		return (-1);
	else if (res > 0)
		return (1);
	else
		return (0);
}
