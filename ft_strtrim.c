/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 18:17:35 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/15 19:08:16 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (!*s1)
	{
		if (!(str = (char *)malloc(sizeof(char))))
			return (NULL);
		*str = '\0';
		return (str);
	}
	str = (char *)s1;
	while (*(s1 + 1))
		s1++;
	while (ft_strchr(set, *s1))
		s1--;
	return (ft_substr(str, 0, s1 - str + 1));
}
