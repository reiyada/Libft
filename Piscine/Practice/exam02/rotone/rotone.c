/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:08:48 by ryada             #+#    #+#             */
/*   Updated: 2024/09/19 13:18:06 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int main(int argc, char **argv)
{
    int i;
    if (argc == 2)
    {
        i = 0;
        while(argv[1][i] != '\0')
        {
            if((argv[1][i] >='a' && argv[1][i] <= 'y') || (argv[1][i] >='A' && argv[1][i] <= 'Y'))
            {
                argv[1][i] = argv[1][i] + 1;
            }
            else if (argv[1][i] == 'z')
                argv[1][i] = 'a';
            else if (argv[1][i] == 'Z')
                argv[1][i] = 'A';
            i++;
        }
        ft_putstr(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}
