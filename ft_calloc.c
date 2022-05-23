/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:59:01 by lwilliam          #+#    #+#             */
/*   Updated: 2022/05/24 00:08:04 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nitems, size_t size)
{
	void *x;

	x = malloc(size * nitems);
	if (!x)
		return (0);
	ft_bzero (mem, count * size);
	return (mem);
}