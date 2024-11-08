/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:34:45 by ryada             #+#    #+#             */
/*   Updated: 2024/11/08 14:19:11 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = ft_intlen(n);
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (len-- > 0)
	{
		if (str[len] == '-')
			break ;
		str[len] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

// int main()
// {
//     int nb = -123;
//     char *number = ft_itoa(nb);
//     printf("%s\n", number);
//     free (number);
//     return (0);
// }