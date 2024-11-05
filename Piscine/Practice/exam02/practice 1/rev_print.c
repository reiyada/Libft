/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:23:23 by ryada             #+#    #+#             */
/*   Updated: 2024/09/18 13:32:07 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_rev_print (char *str)
{
    int i;
    
    i = ft_strlen(str);
    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    str[i] = '\0';
    return (str);
}

int main()
{
    char str[] = "hello";
    ft_rev_print(str);
    return (0);
}
