/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 16:57:45 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/13 18:17:52 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	length;

	i = dstsize;
	length = ft_strlen(src);
	if (i != 0)
		while (--i != 0)
			if ((*dst++ = *src++) == '\0')
				break ;
	if (i == 0)
		if (dstsize != 0)
			*dst = '\0';
	return (length);
}
