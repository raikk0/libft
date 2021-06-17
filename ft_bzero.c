/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:06:54 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/16 04:56:16 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Percorre uma string até a posição 'n' preenchendo com \0
void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = str;
	while (i < n)
	{
		*ptr = '\0';
		i++;
		ptr++;
	}
}
