/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:51:04 by ryada             #+#    #+#             */
/*   Updated: 2024/09/23 13:59:22 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_puthar (char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                argv[1][i] -= 32;
                ft_puthar(argv[1][i]);
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                argv[1][i] += 32;
                ft_puthar(argv[1][i]);
            }
            else
                ft_puthar(argv[1][i]);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}