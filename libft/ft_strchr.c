/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:56:46 by nmarques          #+#    #+#             */
/*   Updated: 2021/09/13 17:56:46 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *s_sign;
	unsigned char c_sign;

	s_sign = (char *)s;
	c_sign = (unsigned char)c;

	while(*s_sign)
	{
		if(*s_sign ==  c_sign)
			return (s_sign);
		s_sign++;
	}
	if(c_sign == '\0' && *s_sign == '\0')
		return (s_sign);

	return (NULL);
}
