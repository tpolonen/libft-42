/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:04:13 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/24 18:19:32 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*d;

	d = dst;
	while (*src && dstsize > 1)
	{
		*d++ = *src++;
		dstsize--;
	}
	if (dstsize > 0)
		*d = '\0';
	return ((size_t)(d - dst) + ft_strlen(src));
}
