/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:31:57 by ryada             #+#    #+#             */
/*   Updated: 2024/09/22 16:14:07 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int check_sep(char c, char sep)
{
    if (c == sep)
        return (1);
    else
        return (0);
}

int count_words(char *str, char sep)
{
    int i;
    int count;

    i = 0;
    count = 0;
    if (str[0] != '\0' && !check_sep(str[0], sep))
        count++;
    while (str[i] != '\0')
    {
        if (i > 0 && !check_sep(str[i], sep) && check_sep(str[i - 1], sep))
            count++;
        i++;
    }
    return (count);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char **str_split(char *str, char sep)
{
    char **result;
    int i;
    int j;
    int q;

    result = (char **)malloc((count_words(str, sep)+ 1) * sizeof(char *));
    if (!result)
        return (NULL);
    i = 0;
    q = 0;
    while (str[i] != '\0')
    {
        if (!check_sep(str[i], sep))
        {
            j = i;
            while (str[i] != '\0' && !check_sep(str[i], sep))
                i++;
            result[q] = (char *)malloc((i - j + 1) * sizeof(char));
            ft_strncpy(result[q], &str[j], i - j);
            q++;
        }
        i++;
    }
    result[q] = NULL;
    return (result);
}

int main(void)
{
    char str[] = "Hello, I am Rei.";
    char sep = ' ';
    char **result = str_split(str, sep);
    int i = 0;
    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        i++;
    }
    free(result);
    return 0;
}