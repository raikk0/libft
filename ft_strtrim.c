/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 22:03:40 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/17 19:09:56 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set) // verificação dos parâmetros passados
		return (0);
	while (*s1 && ft_strchr(set, *s1)) // percorre s1 até o fim ou não encontrar set em s1.
		s1++;
	i = ft_strlen(s1); // pega o índice do final da string
	while (i && ft_strchr(set, s1[i])) // percorre s1 do fim até não encontrar set.
		i--;
	return (ft_substr(s1, 0, i + 1));
}

// &&&farofa&&&
// farofa&&& [i = 9]
// i = 6
// farofa
// ft_substr(s1, 0, 7)
