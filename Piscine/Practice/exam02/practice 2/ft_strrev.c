/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:43:30 by ryada             #+#    #+#             */
/*   Updated: 2024/09/20 09:51:20 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}

char    *ft_strrev(char *str)
{
    int i;
    char temp;
    int len;
    len = ft_strlen(str) - 1;
    i = 0;
    while(i < len )
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    len = ft_strlen(str);
    str[len] = '\0';
    return(str);
}

int main()
{
    char str[] = "hello";
    printf("%s", ft_strrev(str));
    return(0);
}