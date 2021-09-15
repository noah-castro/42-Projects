/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:18:12 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/10 16:18:12 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t index;
	index = 0;

	while(index < dstsize - 1 && dst[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst = '\0';
	return index;
}
