/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:12:28 by ryada             #+#    #+#             */
/*   Updated: 2024/09/18 17:34:19 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_findSame(char *s1, char *s2)
{
    int i;
    int j;
    int q;
    char *result;

    i = 0;
    q = 0;
    while(s1[i] != '\0')
    {
        j = 0;
        while(s2[j] != '\0')
        {
            if (s1[i] == s2[j])
            {
                result[q] = s1[i];
                q++;
            }
            j++;
        }
        i++;
    }
    result[q] = '\0';
    return (result);
}

char *ft_checkDouble(char *str)
{
    int i;
    int j;
    int q;
    char *result;

    i = 0;
    q = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[j] != '\0')
        {
            if (str[i] != str[j])
            {
                result[q] = str[i];
                q++;
            }
            j++;
        }
        i++;
    }
    return (result);
}

int main(int argc, char **argv)
{
    char *result;
    int len;
    
    if (argc == 3)
    {
        len = ft_strlen(argv[1]) + ft_strlen(argv[2]);
        result = (char *)malloc((len + 1) * sizeof(char));
        if (!result)
            return ('NULL');
        result = ft_findSame(argv[1], argv[2]);
        result = ft_checkDouble(result);
        ft_putstr(result);
    }
    write(1, "\n", 1);
    return (0);
}