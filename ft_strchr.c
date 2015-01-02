/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:56:05 by tgauvrit          #+#    #+#             */
/*   Updated: 2015/01/02 15:23:30 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, char c)
{
	int		i;

	if (!str)
		return (NULL);
	if (c == '\0')
		return (str + ft_strlen(str));
	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] == c)
		return (str + i);
	return (NULL);
}
