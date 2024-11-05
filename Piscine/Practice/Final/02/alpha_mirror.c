/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:40:38 by ryada             #+#    #+#             */
/*   Updated: 2024/09/26 14:36:48 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    int i;
    char c;
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                c = 'z' - argv[1][i] + 'a';
                write (1, &c, 1);
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                c = 'Z' - argv[1][i] + 'A';
                write (1, &c, 1);
            }
            else
                write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}