/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:43:39 by ryada             #+#    #+#             */
/*   Updated: 2024/09/25 15:40:52 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int checkDouble(char *str, char c, int until)
{
    int i;
    i = 0;
    while (i < until)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void ft_union(char *str1, char *str2)
{
    int i;
    int j;
    i = 0;
    while (str1[i] != '\0')
    {
        if (checkDouble(str1, str1[i], i) == 0)
            write (1, &str1[i], 1);
        i++;
    }
    j = 0;
    while (str2[j] != '\0')
    {
        if ((checkDouble(str2, str2[j], j) == 0) && (checkDouble(str1, str2[j], i) == 0))
            write (1, &str2[j], 1);
        j++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_union(argv[1], argv[2]);
    }
    write (1, "\n", 1);
    return (0);
}