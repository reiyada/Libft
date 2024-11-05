/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:30:07 by ryada             #+#    #+#             */
/*   Updated: 2024/09/24 13:10:42 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ab(int nb)
{
    if (nb < 0)
        return (- nb);
    else
        return (nb);
}

int     *ft_range(int start, int end)
{
    int i;
    int size;
    size = ft_ab(end - start) + 1;
    int *result;
    result = (int *)malloc(sizeof(int) * size);
    if (!result)
        return (NULL);
    i = 0;
    if (start == end)
    {
        result[0] = start;
    }
    else if (start < end)
    {
        while (i < size)
        {
            result[i] = start + i;
            i++;
        }
    }
    else if (start > end)
    {
        while (i < size)
        {
            result[i] = start - i;
            i++;
        }
    }
    return (result);
}
/*
#include <unistd.h>
void ft_putnbr(int nb)
{
    char c;

    if (nb < 0)
    {
        write (1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);
}


int main()
{
    int start = -1;
    int end = 5;
    int i = 0;
    int *result = ft_range(start, end);
    while (i < ft_ab(end - start) + 1)
    {
        ft_putnbr(result[i]);
        i++;
    }
    free(result);
}
*/