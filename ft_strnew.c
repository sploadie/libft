/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 09:39:43 by tgauvrit          #+#    #+#             */
/*   Updated: 2014/11/09 14:16:34 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*neoscript;

	neoscript = (char *) malloc((size + 1) * sizeof(char));
	if (!neoscript)
		return (NULL);
	ft_bzero(neoscript, size);
	return (neoscript);
}
