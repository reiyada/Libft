/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:01:42 by ryada             #+#    #+#             */
/*   Updated: 2024/09/18 16:10:47 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

char ft_changechar(char c)
{
    if(c == 'z')
        c = 'a';
    else if (c == 'Z')
        c = 'A';
    else if ((c >= 'a' && c <= 'y' )||(c >= 'A' && c <= 'Y'))
        c = c + 1;
    return (c);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            argv[1][i] = ft_changechar(argv[1][i]);
            i++;
        }
        ft_putstr(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}