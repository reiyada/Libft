/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:37:30 by ryada             #+#    #+#             */
/*   Updated: 2024/11/12 09:37:43 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*number;

	number = ft_itoa(n);
	if (number)
	{
		ft_putstr_fd(number, fd);
		free(number);
	}
}

// int main()
// {
//     int nb = 123;
//     int fd = 1;
//     ft_putnbr_fd(nb, fd);
//     return (0);
// }