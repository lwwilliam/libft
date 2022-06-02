/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:05:21 by lwilliam          #+#    #+#             */
/*   Updated: 2022/06/02 23:48:45 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		flen;
	int		elen;
	int		reslen;
	int		x;

	flen = 0;
	x = 0;
	elen = ft_strlen(s1);
	if (!(s1) && !(set))
		return (NULL);
	while (s1[flen] && ft_strchr(set, s1[flen]) != NULL)
		flen++;
	while (s1[elen - 1] && ft_strrchr(set, s1[elen - 1]) != NULL)
		elen--;
	reslen = elen - flen;
	res = malloc(sizeof(char) * (reslen + 1));
	if (!(res))
		return (NULL);
	while(flen < elen)
	{
		res[x] = s1[flen];
		flen++;
		x++;
	}
	res[flen] = '\0';
	return (res);
}

// #include<stdio.h>

// int main()
// {
// 	printf("%s\n", ft_strtrim("abadddavdcdddabc", "abc"));
// }