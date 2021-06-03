/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 21:51:21 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/02 15:30:06 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		found;
	int		slen;

	i = 0;
	j = 0;
	found = 0;
	slen = ft_strlen(needle);
	if (slen == 0)
		return ((char *)&haystack[0]);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
		{
			found++;
			j++;
		}
		else if (found > 0)
			return (NULL);
		if (found == slen)
			return ((char *)&haystack[i - (slen - 1)]);
		i++;
	}
	return (NULL);
}
