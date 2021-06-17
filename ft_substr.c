/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 04:02:25 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/17 19:09:17 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
*	// Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’. 
*	s =  farofa
*	start = 2
*	slen = 4 (rofa)
*	len = 2
*	ro
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len; // size_t auxiliar para verificar o len de start até o final de 's'

	if (!s)
		return (0);
	if (ft_strlen(s) < start) // verifica se o len de 's' é menor que o start.
		return (ft_calloc(1, sizeof(char))); // se sim, retorna retorna um \0 alocado em algum lugar ?;
	s_len = ft_strlen(s + start); // len a partir do start até o final da 's'
	if ((s_len) < len) // se o len passado for maior, atribui o slen para não alocar espaço a mais
		len = s_len; 
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, (s + start), len + 1); // copia 's' da posição s+start até len+1 para a string 'str' que será retornada
	return (str);
}
