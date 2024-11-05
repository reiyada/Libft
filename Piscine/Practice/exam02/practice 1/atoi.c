/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:12:58 by ryada             #+#    #+#             */
/*   Updated: 2024/09/19 15:18:50 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int nb;
    int sign;
    i = 0;
    nb = 0;
    sign = 1;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
        || str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }
    while (str[i] == '-'|| str[i] == '+' )
    {
        if (str[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + str[i] - '0';
        i++;
    }
    return (nb * sign);
}