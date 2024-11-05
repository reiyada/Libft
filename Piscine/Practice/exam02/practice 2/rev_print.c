/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 08:59:22 by ryada             #+#    #+#             */
/*   Updated: 2024/09/20 09:41:52 by ryada            ###   ########.fr       */
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

char *ft_rev_print (char *str)
{
    if(str)
    {
    char *result;
    int i;
    int len;
    i = 0;
    len = ft_strlen(str);
    result = (char *)malloc((len + 1) * sizeof(char));
    while(len > 0)
    {
        result[i] = str[len - 1];
        i++;
        len--;
    }
    result[i] = '\0';
    i = 0;
    while(result[i] != '\0')
    {
        str[i] = result[i];
        i++;
    }
    str[i] = '\0';
    free(result);
    ft_putstr(str);
    }
    write (1, "\n", 1);
    return(str);
}

int main(int argc, char **argv)
{
    (void)argc;
    ft_rev_print(argv[1]);
    return (0);
}