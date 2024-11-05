/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:21:04 by ryada             #+#    #+#             */
/*   Updated: 2024/09/19 14:10:30 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

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

char *ft_findSame(char *s1, char *s2)
{
    int i;
    int j;
    int q;
    char *result;
    result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!result)
        return(NULL);
    i = 0;
    q = 0;
    while(s1[i] != '\0')
    {
        j = 0;
        while (s2[j] != '\0')
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
    return(result);
}


char *ft_checkDouble(char *str)
{
    int i;
    int j;
    int q;
    int count;
    char *result;
    result = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
    i = 0;
    q = 0;
    while (str[i] != '\0')
    {
        j = 0;
        count = 0;
        while (j < q)
        {
            if(result[j] == str[i])
            {
                count = 1;
                break;
            }
            j++;
        }
        if (!count)
        {
            result[q] = str[i];
            q++;
        }
        i++;
    }
    result[q] = '\0';
    return (result);
}


int main(int argc, char **argv)
{
    char *findsame;
    char *checkdouble;
    if (argc == 3)
    {
        findsame = ft_findSame(argv[1], argv[2]);
        if(findsame)
        {
            checkdouble = ft_checkDouble(findsame);
            if (checkdouble)
            {
                ft_putstr(checkdouble);
                free (checkdouble);
            }
            free(findsame);
        }
    }
    write (1, "\n", 1);
    return (0);
}
