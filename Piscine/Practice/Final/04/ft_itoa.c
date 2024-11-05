/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:10:25 by ryada             #+#    #+#             */
/*   Updated: 2024/09/26 11:20:17 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_nbrlen(int nb)
{
    int len;
    len = 0;
    if (nb <= 0)
        len = 1;
    while (nb != 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int nb)
{
    int len;
    char *str;
    unsigned int n;
    len = ft_nbrlen(nb);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    len--;
    if (nb == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (nb < 0)
    {
        str[0] = '-';
        n = -nb;
    }
    else
        n = nb;
    while (n > 0)
    {
        str[len] = (n % 10) + '0';
        n = n / 10;
        len--;
    }
    return (str);
}