/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 22:16:02 by tgauvrit          #+#    #+#             */
/*   Updated: 2015/01/02 15:28:23 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*saf_dst;
	unsigned char	*saf_src;

	if (!dst || !src)
		return (NULL);
	saf_dst = (unsigned char*)dst;
	saf_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		saf_dst[i] = saf_src[i];
		i++;
	}
	return (dst);
}
