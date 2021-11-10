/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:42:12 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/10 18:44:26 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d1;
	char	*s1;

	if (!dst || !src)
		return (dst);
	d1 = (char *) dst;
	s1 = (char *) src;
	while (n > 0)
	{
		*d1++ = *s1++;
		n--;
	}
	return (dst);
}	
