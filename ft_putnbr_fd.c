/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:20:30 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/15 15:28:03 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	output_number(unsigned int number, int fd)
{
	if (number / 10 == 0)
	{
		ft_putchar_fd('0' + number, fd);
		return ;
	}
	output_number(number / 10, fd);
	ft_putchar_fd('0' + number % 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = -1 * n;
	}
	else
		number = n;
	output_number(number, fd);
}
