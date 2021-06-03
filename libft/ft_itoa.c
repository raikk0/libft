/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:50:52 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/02 23:35:18 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

static	void	ft_mount_string(long int nbr, char *str, int nlen)
{
	*(str + nlen--) = nbr % 10 + '0';
	nbr /= 10;
	if (nbr > 0)
		ft_mount_string(nbr, str, nlen);
}

static	int	ft_intlen(int n)
{
	int	nlen;

	nlen = 0;
	while (n)
	{
		n /= 10;
		nlen++;
	}	
	return (nlen);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	n_long;
	int			nlen;
	int			nbr;
	int			trigger_negative;

	nbr = n;
	n_long = (long int)nbr;
	nlen = 0;
	nlen = ft_intlen(n);
	trigger_negative = 0;
	if (n < 0)
	{
		trigger_negative = 1;
		nlen += 1;
		n_long *= -1;
	}
	else if (n == 0)
		nlen += 1;
	str = (char *)malloc(nlen + 1);
	*(str + nlen--) = '\0';
	ft_mount_string(n_long, str, nlen);
	if (trigger_negative)
		*str = '-';
	return (str);
}
