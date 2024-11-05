/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:46:39 by ryada             #+#    #+#             */
/*   Updated: 2024/09/18 13:14:43 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_aff(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a')
        {
            write(1, "a\n", 2);
            return;
        }
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "a\n", 2);
    else
        ft_aff(argv[1]);
    return (0);
}