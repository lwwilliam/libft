/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:14:51 by lwilliam          #+#    #+#             */
/*   Updated: 2022/05/24 23:35:14 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	x;
	char	*d;
	char	*s;

	x = 0;
	d = (char *)dest;
	s = (char *)src;
	if (d < s)
		while (n < 0)
		{
			d[n] = s[n];
			n--;
		}
	else
		while (x < n)
		{
			d[x] = s[x];
			x++;
		}
	return (dest);
}
