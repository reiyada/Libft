/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:16:48 by ryada             #+#    #+#             */
/*   Updated: 2024/09/19 11:40:09 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
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

char *ft_removeDuplicates(char *str)
{
    int i;
    int j;
    int q;
    int count;
    char *result;
    result = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
    if (!result)
        return(NULL);
    i = 0;
    q = 0;
    count = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[j] != '\0')
        {
            if (str[i] == str[j])
            {
                count++;
            }
            j++;
        }
        if (count == 1)
        {
            result[q] = str[i];
            q++;
        }
        count = 0;
        i++;
    }
    result[q] = '\0';
    return (result);
}

char *ft_put2strs(char *s1, char *s2)
{
    int i;
    int j;
    char *result;

    result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!result)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        result[j] = s1[i];
        result[j + 1] = s2[i];
        j = j + 1;
        j++;
        i++;
    }
    result[j] = '\0';
    return (result);
}

int main(int argc, char **argv)
{
    char *twostrs;
    char *norepeat;
    if (argc == 3)
    {
        twostrs = ft_put2strs(argv[1],argv[2]);
        if (twostrs)
        {
            norepeat = ft_removeDuplicates(twostrs);
            if (norepeat)
            {
                ft_putstr(norepeat);
                free(norepeat);
            }
            free(twostrs);
        }
    }
    write(1, "\n", 1);
    return (0);
}

