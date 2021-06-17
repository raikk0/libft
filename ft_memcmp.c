/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 00:36:02 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/16 05:21:39 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Compares the first n bytes of memory area str1 and memory area str2.
*/

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)str1)[i] != ((char *)str2)[i])
		{
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		}
		i++;
	}
	return (0);
}
