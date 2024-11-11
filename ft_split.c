/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rei <rei@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:11:49 by ryada             #+#    #+#             */
/*   Updated: 2024/11/11 11:56:35 by rei              ###   ########.fr       */
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
    if (!(result= (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *))))
        return (NULL);
    while (s[start])
    {
        while (s[start] == c)
            start++;
        if (s[start] == '\0')
            break;
        end = start;
        while (s[end] != c && s[end])
            end++;
        if(!(result[i++]= ft_substr(s, start, end - start)))
            return (ft_freeAllAloc(result, i), NULL);
        start = end;
    }
    return (result[i] = NULL, result);
}
int main()
{
    char const str[] = "Hello I am Rei";
    char sep = ' ';
    char **result = ft_split(str, sep);
    int i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
        i++;
    }
    printf("\n");
    return (0);
}