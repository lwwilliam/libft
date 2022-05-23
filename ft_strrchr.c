/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:15:26 by lwilliam          #+#    #+#             */
/*   Updated: 2022/05/23 18:08:21 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int y)
{
	int	lw;

	lw = 0;
	while (str[lw] != '\0')
	{
		lw++;
	}
	while (*str)
	{
		if (str[lw] == y)
		{
			return ((char *)str + lw);
		}
		lw--;
	}
	return (0);
}
