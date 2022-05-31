/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:14:10 by lwilliam          #+#    #+#             */
/*   Updated: 2022/05/31 21:18:17 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int g)
{
	int	len;

	while (g)
	{
		if (g < 0)
		{
			g *= -1;
			len++;
		}
		if (g > 0)
		{
			g = g / 10;
			len++;
		}
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;

	len = count(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	while (len == 0)
		num = '0';
	num[len--] = '\0';
	if (len < 0)
	{
		n = '-';
		n *= -1;
	}
	while (len > 0)
		num[len] = ((n / 10) + 48);
		len = len / 10;
		len--;
	return (num);
}
