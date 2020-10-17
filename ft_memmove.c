/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 10:42:31 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/13 14:49:49 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	char	*to_copy;
	char	*from_copy;

	to_copy = dst;
	from_copy = src;
	if (src > dst)
		while (len--)
			*to_copy++ = *from_copy++;
	else
		while (len--)
			to_copy[len] = from_copy[len];
	return (dst);
}
