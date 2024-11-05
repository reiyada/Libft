/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:26:35 by ryada             #+#    #+#             */
/*   Updated: 2024/09/25 14:36:47 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int has_been_printed(char *str, char c, int pos)
{
    int i;
    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void solve(char *s1, char *s2)
{
    int i;
    int j;
    i = 0;
    while (s1[i] != '\0')
    {
        j = 0;
        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j])
            {
                if (!has_been_printed(s1, s1[i], i))
                {
                    write(1, &s1[i], 1);
                }
                break;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        solve(argv[1], argv[2]);
    }
    write (1, "\n", 1);
    return (0);
}