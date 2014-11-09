/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 18:44:23 by tgauvrit          #+#    #+#             */
/*   Updated: 2014/11/08 19:12:45 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_str_int_len(char *str)
{
	size_t length;

	length = 0;
	while (*str != '\0' && ft_isdigit(*str))
	{
		length++;
		str++;
	}
	return (length);
}

int				ft_atoi(char *str)
{
	long long	str_int;
	int			str_int_sign;
	size_t		str_int_len;
	size_t		i;

	if (str[0] == 0)
		return (0);
	str_int_sign = 1;
	if (str[0] == '-' && str++)
		str_int_sign = -1;
	else if (str[0] == '+')
		str++;
	else if (!ft_isprint(str[0]) || str[0] == ' ')
		return (ft_atoi(str + 1));
	str_int_len = ft_str_int_len(str);
	str_int = 0;
	i = 0;
	while (i < str_int_len)
	{
		str_int = (str_int * 10) + (str[i] - '0');
		if (str_int < 0)
			return (-1);
		i++;
	}
	return ((int)str_int * str_int_sign);
}
