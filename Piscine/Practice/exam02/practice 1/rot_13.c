/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:27:58 by ryada             #+#    #+#             */
/*   Updated: 2024/09/18 16:00:18 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

char ft_changechar(char c)
{
    if (c >= 65 && c <= 77)
        c = c + 13;
    else if (c >= 78 && c <= 90)
        c = 65 + (c - 78);
    if (c >= 97 && c <= 109)
        c = c + 13;
    else if (c >= 110 && c <= 122)
        c = 97 + (c - 110);
    return (c);
}

int main(int argc, char **argv)
{
    int i;
    if (argc == 2)
    {
        i = 0;
        while(argv[1][i] != '\0')
        {
            argv[1][i] = ft_changechar(argv[1][i]);
            i++;
        }
        ft_putstr(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}