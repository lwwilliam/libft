/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:44:53 by lwilliam          #+#    #+#             */
/*   Updated: 2022/05/25 23:12:40 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int x;
	int y;
	char *str;

	x = 0;
	y = 0;
	if((str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)) == NULL)
		return(NULL);
	while(s1[x])
	{
		str[x] = s1[x];
		x++;
	}
	while(s2[y])
	{
		str[x] = s2[y];
		x++;
		y++;
	}
	str[x] = '\0';
	return(str);
}