/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:33:05 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/15 19:42:38 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*p;
	unsigned int	index;

	len = ft_strlen(s);
	if (!(p = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	index = 0;
	while (s[index])
	{
		p[index] = f(index, s[index]);
		index++;
	}
	p[index] = '\0';
	return (p);
}
