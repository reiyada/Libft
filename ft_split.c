/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:11:49 by ryada             #+#    #+#             */
/*   Updated: 2024/11/08 11:54:50 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_countword(char const *str, char sp)
{
    size_t i;
    size_t count;

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        while (str[i] == sp)
            i++;
        if (str[i] != '\0')
        {
            count++;
            while (str[i] != '\0' && str[i] != sp)
                i++;
        }
    }
    return (count);
}
void    ft_freeAllAloc(char **table, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        free (table[i]);
        i++;
    }
    free(table);
}

char **ft_split(char const *s, char c)
{
    char **result;
    size_t start;
    size_t end;
    int i;

    start = 0;
    i = 0;
    result = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    while (s[start]!= '\0')
    {
        while (s[start] == c)
            start++;
        if (s[start] == '\0')
            break;
        end = start;
        while (s[end] != c && s[end] != '\0')
            end++;
        result[i] = ft_substr(s, start, end - start);
        if(!result[i])
            return (ft_freeAllAloc(result, i), NULL);
        i++;
        start = end;
    }
    result[i] = NULL;
    return (result);
}
