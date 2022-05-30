/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:15:00 by lwilliam          #+#    #+#             */
/*   Updated: 2022/05/25 14:51:31 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int y)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == (char)y)
		{
			return ((char *)str + x);
		}
		x++;
	}
	if (str[x] == (char)y)
	{
		return ((char *)str + x);
	}
	return (NULL);
}
