/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:38:38 by ryada             #+#    #+#             */
/*   Updated: 2024/09/25 10:52:30 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_find(char i, char c)
{
    if (i == c)
        return (1);
    return (0);
}

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
    if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (ft_find(argv[1][i], argv[2][0]) == 1)
                argv[1][i] = argv[3][0];
            i++;
        }
        ft_putstr(argv[1]);
    }
    write (1, "\n", 1);
    return (0);
}