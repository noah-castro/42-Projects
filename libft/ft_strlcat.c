/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:21:37 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/13 14:21:37 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t index;
	size_t src_index;
	size_t dst_len;
	size_t src_len;

	index = 0;
	src_index = 0;
	dst_len = 0;
	while(dst[dst_len] && dst_len < dstsize)
		dst_len++;

	index = dst_len;
	while(*src && (index < dstsize - 1))
	{
		dst[index++] = src[src_index];
		src_index++;
	}

	dst[index + src_index] = '\0';

	src_len = ft_strlen(src);

	return(dst_len + src_len);
}
