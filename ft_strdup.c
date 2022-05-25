/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:22:48 by lwilliam          #+#    #+#             */
/*   Updated: 2022/05/25 22:36:01 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strdup(const char *s)
{
	int x;
	int len;
	char *str;

	x = 0;
	len = 0;
	if(s[len] != '\0')
	{
		len++;
	}
	if ((str = (char *)malloc(sizeof(char) * (len +1))) == NULL)
		return(NULL);
	while (x < len)
	{
		str[x] = s[x];
		x++;
	}
	str[x] = '\0';
	return (str);
}