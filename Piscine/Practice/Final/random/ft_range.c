/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:05:28 by ryada             #+#    #+#             */
/*   Updated: 2024/09/24 10:57:14 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_size(int start, int end)
{
    int size;
    if (start == end)
        size = 1;
    else if (start > 0 && end > 0 && start < end)
        size = end - start + 1;
    else if (start < 0 && start < end)
        size = end - start + 1;
    else if (end < 0 && start > end)
        size = start - (-end) + 1;
    return (size);
}

int     *ft_range(int start, int end)
{
    int i;
    int size;
    int *result;
    
    size = ft_size(start, end);
    result = (int *)malloc(sizeof(int) * size);
    i = 0;
    if (start < end)
    {
        while (result[i] <= end)
        {
            result[i] = start + i;
            i++;
        }       
    }
    else if (start > end)
    {
        while (result[i] <= end)
        {
            result[i] = start - i;
            i++;
        } 
    }
    if (start == end)
        result[i] = start;
    return (result);
}
#include <unistd.h>

int main()
{
    int start = 1;
    int end = 5;
    int i;
    int *result = ft_range(start, end);
    i = 0;
    while (result[i] <= end)
    {
        write (1, &result[i], 1);
        i++;
    }
    free (result);
}