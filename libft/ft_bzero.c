/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:01:08 by nmarques          #+#    #+#             */
/*   Updated: 2021/08/27 16:01:08 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t index;
	index = 0;

	int nuller;
	nuller = '\0';


	unsigned char *p = b;
	while(index < len)
	{
		p[index] = nuller;
		index++;
	}
}
