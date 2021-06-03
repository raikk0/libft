/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:30:02 by throdrig          #+#    #+#             */
/*   Updated: 2021/05/27 23:13:16 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	dest_len;
	size_t	offset;

	dest_len = ft_strlen(((char *)dest));
	offset = dest_len - (dest_len - n);
	while (offset > 0)
	{
		((char *)dest)[offset - 1] = ((char *)src)[offset - 1];
		offset--;
	}
	return (dest);
}
