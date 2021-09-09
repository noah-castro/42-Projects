/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 14:06:51 by nmarques          #+#    #+#             */
/*   Updated: 2021/08/30 14:06:51 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, int len)
{
	int	index;
	char	*p_src;
	char	*p_dst;

	*p_src = (char *)src;
	*p_dst = (char *)dst;
	index = 0;

	if(index < len)
	{
		p_dst = p_src;
	}
}
