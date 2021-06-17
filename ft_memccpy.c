/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:29:24 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/16 05:20:39 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* ft_memccpy: Copies bytes from memory area src into dest, stopping after the first occurrence of c has been copied, or after n bytes have been copied, whichever comes first.
*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	void	*ret;	// void pointeiro auxiliar para retorno, que irá apontar para a posição onde encontrar 'c'.
					// caso não encontre 'c', o retorno será nulo

	i = 0;
	ret = dest; // passa para ret a posição inicial de dest
	if (c > 256) // verifica se o char passado não é maior que 256 na ASCII
		c = 256 - c; // se for, joga c para dentro da tabela ascii subtraindo de 256. Outra opção seria fazer cast para (unsigned char) na linha 32
	while (n && i < n) // enquanto n for diferente de nulo e i não chegar no n
	{
		((char *)dest)[i] = ((char *)src)[i]; // atribui em dest[i] o valor de src[i]
		ret++; // passa o ponteiro adiante
		if (((char *)src)[i] == c) // caso encontre 'c', retorna o ponteiro
			return (ret);
		i++;
	}
	return (NULL); // caso contrário, retornará nulo
}
