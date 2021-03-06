/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 17:51:08 by tgauvrit          #+#    #+#             */
/*   Updated: 2015/01/02 15:10:03 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	temp;
	size_t	len;
	size_t	half_len;
	size_t	i;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	half_len = len / 2;
	i = 0;
	while (i < half_len)
	{
		temp = str[i];
		str[i] = str[(len - 1) - i];
		str[(len - 1) - i] = temp;
		i++;
	}
	return (str);
}
