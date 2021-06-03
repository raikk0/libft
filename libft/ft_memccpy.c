/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:29:24 by throdrig          #+#    #+#             */
/*   Updated: 2021/05/28 01:46:17 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	void	*ret;

	i = 0;
	ret = ft_strdup(dest);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		ret++;
		if (((char *)src)[i] == c)
			return (ret);
		i++;
	}
	return (NULL);
}
