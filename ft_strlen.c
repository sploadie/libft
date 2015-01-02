/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:02:18 by tgauvrit          #+#    #+#             */
/*   Updated: 2015/01/02 15:19:31 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	char	*temp;

	if (!str)
		return (0);
	temp = str;
	while (*temp != '\0')
		temp++;
	return (temp - str);
}
