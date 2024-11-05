/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:28:51 by ryada             #+#    #+#             */
/*   Updated: 2024/09/25 10:36:43 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_count(char c)
{
    int count;
    if(c >= 'a' && c <= 'z')
        count = c - 96;
    else if (c >= 'A' && c <= 'Z')
        count = c - 64;
    else
        count = 1;
    return (count);
}

int main(int argc, char **argv)
{
    int i;
    int count;
    int j;
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            count = ft_count(argv[1][i]);
            j = 0;
            while (j < count)
            {
                write (1, &argv[1][i], 1);
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}