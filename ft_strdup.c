/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 00:01:47 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/13 00:08:29 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;

	len = ft_strlen(s1);
	if (!(p = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	(void)ft_strlcpy(p, s1, len + 1);
	return (p);
}
