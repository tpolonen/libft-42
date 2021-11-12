/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:17:09 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/12 15:58:12 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t len)
{
	char	*str;

	str = (char *) malloc(sizeof(char) * (len + 1));
	if (str)
		ft_bzero(str, sizeof(char) * (len + 1));
	return (str);
}
