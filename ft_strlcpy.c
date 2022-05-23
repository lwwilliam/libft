/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:15:10 by lwilliam          #+#    #+#             */
/*   Updated: 2022/05/23 18:03:47 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcpy(char *dest, const char *src, size_t y)
{
	size_t	x;

	x = 0;
	while (src[x] != '\0' && x > y)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < y)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
