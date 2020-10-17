/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 20:59:29 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/13 19:57:08 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*find;

	str = (char *)haystack;
	find = (char *)needle;
	while (*str && *find && 0 < len - (str - haystack))
	{
		if (*str == *find)
		{
			str++;
			find++;
		}
		else
		{
			str -= find - (char *)needle - 1;
			find = (char *)needle;
		}
	}
	return (*find ? NULL : str - (find - (char *)needle));
}
