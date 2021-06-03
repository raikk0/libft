/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 00:48:36 by throdrig          #+#    #+#             */
/*   Updated: 2021/05/28 01:45:42 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	dest_len;
	size_t	offset;
	size_t	i;

	dest_len = ft_strlen(((char *)dest));
	offset = dest_len - (dest_len - n);
	if (dest > src)
	{
		while (offset > 0)
		{
			((char *)dest)[offset - 1] = ((char *)src)[offset - 1];
			offset--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
