/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 00:48:36 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/16 21:27:56 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Copies n characters from str2 to str1, but for overlapping memory blocks, memmove() is a safer approach than memcpy().
*
*
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (dest == src)
		return (NULL);
	if (dest > src)
	{
		src2 = src2 + n - 1;
		dest2 = dest2 + n - 1;
		while (n--)
		{
			*dest2-- = *src2--;
		}
	}
	else if (dest <= src)
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
