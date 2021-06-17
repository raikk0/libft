/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 05:25:46 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/03 05:04:39 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (i < n)
		{
			if (str1[i] != str2[i])
			{
				return ((unsigned char)str1[i] - (unsigned char)str2[i]);
			}
		}
		else
			break ;
		i++;
	}
	return (0);
}
