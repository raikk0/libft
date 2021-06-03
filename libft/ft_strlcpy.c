/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 04:06:26 by throdrig          #+#    #+#             */
/*   Updated: 2021/05/31 12:04:07 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	c1;
	size_t	s_len;

	s_len = ft_strlen(src);
	c1 = 0;
	while (c1 < (dstsize - 1))
	{
		if (src[c1] != '\0')
		{
			if (dstsize > 0)
				dest[c1] = src[c1];
		}
		else
			break ;
		c1++;
	}
	if (c1 < dstsize)
		dest[c1] = '\0';
	return (s_len);
}
