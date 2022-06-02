/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:14:10 by lwilliam          #+#    #+#             */
/*   Updated: 2022/06/02 14:39:38 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int c)
{
	int	x;

	x = 0;
	if (c == -2147483648)
		return (11);
	if (c == 0)
		return (1);
	if (c < 0)
	{
		c = c * -1;
		x++;
	}
	while (c != 0)
	{
		c = c / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;

	len = count(n);
	num = malloc(sizeof(char) * (len + 1));
	if (!(num))
		return (NULL);
	num[len--] = '\0';
	if (n == -2147483648)
		num = "-2147483648";
	if (n < 0)
	{
		num[0] = '-';
		n = n * -1;
	}
	else if (n == 0)
	{
		num[0] = '0';
	}
	while (n > 0)
	{
		num[len--] = ((n % 10) + 48);
		n = n / 10;
	}
	return (num);
}