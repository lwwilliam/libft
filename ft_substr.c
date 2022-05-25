/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:37:59 by lwilliam          #+#    #+#             */
/*   Updated: 2022/05/25 22:43:23 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int x;
	char *str;

	x = 0;
	if ((str = (char *)malloc(len + 1)) == NULL)
		return(NULL);
	while (x < len)
	{
		str[x] = s[start];
		x++;
		start++;
	}
	str[x] = '\0';
	return (str);
}