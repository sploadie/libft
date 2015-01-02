/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 22:09:53 by tgauvrit          #+#    #+#             */
/*   Updated: 2015/01/02 15:14:32 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	char	*end_dest;

	if (!dest || !src)
		return (NULL);
	if (nb <= 0)
		return (dest);
	end_dest = dest + ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		end_dest[i] = src[i];
		i++;
	}
	while (i < nb)
	{
		end_dest[i++] = '\0';
		i++;
	}
	end_dest[i] = '\0';
	return (dest);
}
