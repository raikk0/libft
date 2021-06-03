/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:54:38 by throdrig          #+#    #+#             */
/*   Updated: 2021/05/20 05:19:13 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static	int	ft_validations(char c, int num, int is_negative, int signal_count)
{
	if ((!ft_isspace(c) && !ft_isdigit(c) && c != '+')
		|| (ft_isspace(c) && num > 0)
		|| (ft_isspace(c) && is_negative)
		|| (signal_count > 1))
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		is_negative;
	int		i;
	int		num;
	int		signal_count;

	is_negative = 0;
	signal_count = 0;
	num = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			signal_count++;
		if (str[i] == '-')
			is_negative = 1;
		else if (!ft_validations(str[i], num, is_negative, signal_count))
			break ;
		if (ft_isdigit(str[i]))
			num = (num * 10) + (str[i] - '0');
	}
	if (is_negative == 1)
		num *= -1;
	return (num);
}
