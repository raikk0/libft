/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 00:36:02 by throdrig          #+#    #+#             */
/*   Updated: 2021/05/28 01:46:22 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)str1)[i] != ((char *)str2)[i])
		{
			if (((unsigned char *)str1)[i] < ((unsigned char *)str2)[i])
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}
