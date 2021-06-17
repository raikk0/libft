/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 00:27:30 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/16 21:01:33 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.
*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n) // percorre até a posição 'n'
	{
		if (((unsigned char *)str)[i] == (unsigned char)c) // caso encontre 'c', retorna ponteiro void para a posição 'i' na string.
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
