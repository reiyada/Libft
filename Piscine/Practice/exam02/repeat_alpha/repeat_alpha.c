/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:50:15 by ryada             #+#    #+#             */
/*   Updated: 2024/09/19 12:41:38 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int count;
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                count = argv[1][i] - 'a' + 1;
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                count = argv[1][i] - 'A' + 1;
            }
            else
                count = 1;
            j = 0;
            while (j < count)
            {
                write(1, &argv[1][i], 1);
                j++;
            }
            count = 0;
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
