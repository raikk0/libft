/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:50:52 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/16 05:18:16 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
* itoa: Converte o valor de um inteiro em string.
*/


static	void	ft_mount_string(long int nbr, char *str, int nlen)
{
	*(str + nlen--) = nbr % 10 + '0'; // decrementamos uma posição do ponteiro para atribuiar o resto da divisão por zero, já convertendo para char
	nbr /= 10; // divide o número por 10 para ver se tem mais casas decimais
	if (nbr > 0) // se for maior que zero, chama a função recursivamente. Poderia ter alguma verificação pelo nlen também, já que está decrementando a cada chamada da função.
		ft_mount_string(nbr, str, nlen);
}

static	int	ft_intlen(int n) // verifica a quantidade de números dentro de um int.
{
	int	nlen;

	nlen = 0;
	while (n)
	{
		n = n / 10;
		nlen++;
	}	
	return (nlen);
}

static	int	ft_isnegative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char		*str; // string que sera retornada
	long int	n_long; // usado para converter o inteiro em long para evitar erros com números do tipo INT.
	int			nlen; // usado para armazenar o length do inteiro passado.
	int			nbr; // usado como auxiliar do inteiro original
	int			trigger_negative; // trigger para caso o número seja negativo

	nbr = n; // atribui o valor de n para a variável auxiliar
	n_long = (long int)nbr; // converte a variável auxiliar em long
	nlen = ft_intlen(n);
	trigger_negative = ft_isnegative(n);
	if (trigger_negative) // caso seja um número negativo
	{
		nlen += 1; // aumenta um no length pensando no sinal que sera adicionado como char no início da string
		n_long *= -1; // transforma o número em positivo
	}
	else if (n == 0) // se o número original for zero, aumentamos um no length pois na verificação da ft_intlen, n = 0 não entra no WHILE, e o zero é um caracter.
		nlen += 1;
	str = (char *)malloc(nlen + 1); // aloca nlen + 1 (para o \0 final) bytes de memória para str.
	if (!str) // se der errado, retorna nulo.
		return (0);
	*(str + nlen--) = '\0';	// o valor de str na posição final será o \0.
	ft_mount_string(n_long, str, nlen); // montamos a string, passando como argumento a variável auxiliar que está positiva, a string e o nlen.
	if (trigger_negative)
		*str = '-'; // atribui o sinal de menor no início da string, pois na função ft_mount_string o ponteiro deve chegar no início.
	return (str);
}
