/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:35:11 by ryada             #+#    #+#             */
/*   Updated: 2024/09/18 17:49:10 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
    }
}

int main(int argc, char **argv)
{
    int i;
    char *result;
    int len;

    len = ft_strlen(argv[1]);
    if (argc == 2)
    {
        result = (char *)malloc((len + 1) * sizeof(char));
        if (!result)
            return ('NULL');
        len = len - 1;
        while(len > 0 && (argv[1][len] == '\t' || argv[1][len] == ' '))
        {
            len--;
        }
        i = 0;
        while (argv[1][len] != '\0')
        {
            result[i] = argv[1][len];
            i++;
            len++;
        }
        ft_putstr(result);
    }
    write(1, "\n", 1);
    return (0);
}