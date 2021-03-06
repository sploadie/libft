/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:54:52 by tgauvrit          #+#    #+#             */
/*   Updated: 2015/01/02 15:35:14 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(const void *src, size_t size)
{
	unsigned char	*dup;
	size_t			i;
	unsigned char	*saf_src;

	if (!src)
		return (NULL);
	dup = (unsigned char *)malloc(size);
	if (!dup)
		return (dup);
	saf_src = (unsigned char*)src;
	i = 0;
	while (i < size)
	{
		dup[i] = saf_src[i];
		i++;
	}
	return (dup);
}
