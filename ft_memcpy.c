/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 10:42:31 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/13 13:17:23 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char	*to_copy;
	char	*from_copy;

	to_copy = dst;
	from_copy = src;
	while (n--)
		*to_copy++ = *from_copy++;
	return (dst);
}
