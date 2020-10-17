/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:37:55 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/15 18:48:44 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	size;

	if (start >= (unsigned int)ft_strlen(s))
	{
		if (!(p = (char *)malloc(sizeof(char))))
			return (NULL);
		*p = '\0';
		return (p);
	}
	if (ft_strlen(&s[start]) > len)
		size = len;
	else
		size = ft_strlen(&s[start]);
	if (!(p = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	(void)ft_strlcpy(p, &s[start], size + 1);
	return (p);
}
