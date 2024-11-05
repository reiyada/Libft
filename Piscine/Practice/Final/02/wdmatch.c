/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:43:03 by ryada             #+#    #+#             */
/*   Updated: 2024/09/26 14:54:49 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        write (1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int find;
    if (argc == 3)
    {
        i = 0;
        find = 0;
        j = 0;
        while (argv[1][i] != '\0')
        {
            while (argv[2][j] != '\0')
            {
                if (argv[1][i] == argv[2][j])
                {
                    find++;
                    j++;
                    break;
                }
                j++;
            }
            i++;
        }
        if (argv[1][i] == '\0' && i == find)
            ft_putstr(argv[1]);
    }
    write (1, "\n", 1);
    return (0);
}