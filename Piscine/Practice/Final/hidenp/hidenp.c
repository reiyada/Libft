/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:32:05 by ryada             #+#    #+#             */
/*   Updated: 2024/09/25 17:43:59 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_find(char *s1, char *s2)
{
    int i;
    int j;
    int count;
    i = 0;
    j = 0;
    count = 0;
    while (s1[i] != '\0' && s2[j] != '\0')
    {
        if (s1[i] == s2[j])
        {
            count++;
            i++;
        }
        j++;
    }
    if (count == i && s1[i] == '\0')
        write (1, "1", 1);
    else
        write (1, "0", 1);
}
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_find(argv[1], argv[2]);
    }
    write (1, "\n", 1);
    return (0);
}