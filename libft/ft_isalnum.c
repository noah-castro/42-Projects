/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:57:36 by nmarques          #+#    #+#             */
/*   Updated: 2021/08/24 19:57:36 by nmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		if (c >= 48 && c <= 57)
			return (1);
		else
			return (0);
	}
}
