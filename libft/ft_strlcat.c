/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 01:17:25 by throdrig          #+#    #+#             */
/*   Updated: 2021/05/31 11:56:52 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_calc_return(size_t dstsize, size_t d_len, size_t r_len)
{
	if (dstsize > d_len)
		return (r_len);
	return (r_len - (d_len - dstsize));
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	c1;
	size_t	c2;
	size_t	d_len;
	size_t	s_len;
	size_t	r_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	r_len = d_len + s_len;
	if (dstsize <= 0)
		return (s_len);
	c1 = ft_strlen(dest);
	c2 = 0;
	while (src[c2] && c1 < (dstsize - 1))
	{
		if (src[c2] != '\0')
			dest[c1] = src[c2];
		c2++;
		c1++;
	}
	if (c1 < dstsize)
		dest[c1] = '\0';
	return (ft_calc_return(dstsize, d_len, r_len));
}
