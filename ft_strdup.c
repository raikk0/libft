/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:27:13 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/14 02:30:32 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		slen;

	slen = ft_strlen(s);
	dst = (char *)malloc((slen + 1) * sizeof(char));
	if (!dst)
		return (0);
	ft_memcpy(dst, s, slen + 1);
	return (dst);
}
