/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 01:12:21 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/16 21:25:18 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
*	Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.
*	ex: a função 'f' pode transformar os caracteres em maiúsculo, minúsculo, fazer condições, etc... vai da sua imaginação
*	declarar na main.c:
*	
*	char f(unsigned int i, char c)
*	{
*		return (ft_toupper(c + (i-i))); // a soma "c + (i-i)"  serve somente para o compilador não encanar de não ter usado o parâmetro 'i'.
*	}
*
*	char string[] = "Meu pastel é mais barato";
*	printf("%s", ft_strmapi(string, &f));
*
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_string; // string auxiliar que será retornada
	unsigned int	i;

	i = 0;
	new_string = ft_strdup(s); // duplica a string original
	if (!new_string) // verificação se correu tudo bem na duplicação
		return (0);
	while (new_string[i]) 
	{
		// percorre a nova string aplicando a função em cada posição da função, passando 'i' como um possível índice para alguma utilidade na função.
		new_string[i] = (*f)(i, new_string[i]); 
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
