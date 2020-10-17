/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:47:44 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/13 13:55:03 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*to_copy;
	const unsigned char	*from_copy;

	to_copy = dst;
	from_copy = src;
	while (n--)
	{
		*to_copy++ = *from_copy;
		if (*from_copy == (unsigned char)c)
			return (to_copy);
		from_copy++;
	}
	return (NULL);
}
