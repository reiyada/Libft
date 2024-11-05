/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:00:01 by ryada             #+#    #+#             */
/*   Updated: 2024/09/26 15:25:53 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_size(int start, int end)
{
    int size;
    if (start > end)
        size = start - end + 1;
    else
        size = end - start + 1;
    return (size);
}

int     *ft_rrange(int start, int end)
{
    int *range;
    int i;
    int size;
    size = ft_size(start, end);
    range = (int *)malloc(sizeof(int) * size);
    if (!range)
        return (NULL);
    i = 0;
    while (i < size)
    {
        if(start <= end)
            range[i] =  end - i;
        else
            range[i] = end + i;
        i++;
    }
    return (range);
}