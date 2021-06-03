/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 01:12:21 by throdrig          #+#    #+#             */
/*   Updated: 2021/05/28 01:47:08 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_string;
	unsigned int	i;

	if (ft_strlen(s) == 0)
		return (NULL);
	i = 0;
	new_string = ft_strdup(s);
	while (new_string[i])
	{
		new_string[i] = (*f)(i, new_string[i]);
		i++;
	}
	return (new_string);
}
