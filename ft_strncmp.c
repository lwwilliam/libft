/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:15:19 by lwilliam          #+#    #+#             */
/*   Updated: 2022/05/23 18:09:16 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	int		res;

	x = 0;
	res = 0;
	while (s1[x] != '\0' && s2[x] != '\0' && x < n)
	{
		res = (s1[x] - s2[x]);
		x++;
	}
	return (res);
}
