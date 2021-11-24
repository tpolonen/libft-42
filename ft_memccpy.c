/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:42:12 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/24 17:38:23 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	void	*cpoint;

	cpoint = ft_memchr(src, c, n);
	if (!cpoint)
	{
		ft_memcpy(dest, src, n);
		return (NULL);
	}
	else
	{
		ft_memcpy(dest, src, (size_t)(cpoint - src) + 1);
		return (dest + (cpoint - src) + 1);
	}
}	
