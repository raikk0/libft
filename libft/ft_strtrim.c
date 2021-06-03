/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 22:03:40 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/02 17:23:19 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static	char	ft_hascharinset(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static	char	*ft_cutfoward(char const *s, char const *set)
{
	int		i;
	int		index;
	char	*str;

	index = 0;
	i = 0;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	while (s[i] != '\0')
	{
		if (index == 0)
		{
			if ((ft_isalnum(s[i]) && !ft_hascharinset(s[i], set)))
			{
				str[index++] = s[i];
			}
		}
		else
		{
			str[index++] = s[i];
		}
		i++;
	}
	return (str);
}

static	char	*ft_cutbackward(char const *s, char const *set)
{
	int		i;
	int		index;
	char	*str;
	int		founddigit;

	i = ft_strlen(s) - 1;
	index = i;
	str = (char *)s;
	founddigit = 0;
	while (i >= 0)
	{
		if ((!ft_isalnum(s[i]) || ft_hascharinset(s[i], set))
			&& founddigit == 0)
		{
			str[index--] = '\0';
		}
		if (ft_isalnum(s[i]) && !ft_hascharinset(s[i], set))
			founddigit = 1;
		i--;
	}
	return (str);
}

static	char	*ft_strcut(char const *s, char const *set)
{
	char	*str;

	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	str = ft_cutfoward(s, set);
	str = ft_cutbackward(str, set);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	str = ft_strcut(s1, set);
	return (str);
}
