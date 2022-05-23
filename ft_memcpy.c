/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:14:46 by lwilliam          #+#    #+#             */
/*   Updated: 2022/05/23 17:51:48 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	x;
	char	*d;
	char	*s;

	x = 0;
	d = (char *)dest;
	s = (char *)src;
	while (x < len)
	{
		d[x] = s[x];
		x++;
	}
	return (dest);
}
