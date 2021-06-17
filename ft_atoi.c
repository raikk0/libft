/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:54:38 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/16 04:59:32 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* atoi: converte uma string para inteiro, verificando se a string possui apenas um sinal no início 
*/


// Verifica se um char passado como parâmetro é um espaço na tabela ascci.
static	int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sign; // Usado para transformar o número em negativo caso tenha o char '-'.
	int	i;

	i = 0;
	num = 0;
	sign = 1;	// Iniciado como 1, pois o número multiplicado por 1 é ele mesmo.
	while (ft_isspace(str[i])) // Percorre a string, incrementando caso o char seja um espaço.
		i++;
		
	/*	Após verificar os espaços, é verificado se o número começa com um sinal de positivo ou negativo.
		ps: Note que é usado um IF e não um WHILE, para verificar apenas um sinal. Se tiver mais de um sinal,
		não vai entrar no próximo WHILE que é para percorrer apenas o números. */ 
	if (str[i] == '+' || str[i] == '-') 
	{
		if (str[i] == '-')
			sign = -1; // Se for negativo, guarda o valor -1 para transformar o número final em negativo.
		i++; // Passa para a próxima posição.
	}
	while (ft_isdigit(str[i])) // Depois de verificar o sinal, percorre a string somente se str[i] foi número.
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign); // Retorna o número multiplicado pelo sinal
}
