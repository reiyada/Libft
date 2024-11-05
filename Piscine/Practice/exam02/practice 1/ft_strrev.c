/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:17:50 by ryada             #+#    #+#             */
/*   Updated: 2024/09/18 15:25:57 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char    *ft_strrev(char *str)
{
    int len;
    int i;
    char *result;
    
    len = ft_strlen(str);
    result = (char *)malloc((len + 1) * sizeof(char));
    i = 0;
    while(len > 0)
    {
        result[i] = str[len - 1];
        i++;
        len--;
    }
    i = 0;
    while(result[i] != '\0')
    {
        str[i] = result[i];
        i++;
    }
    str[i] = '\0';
    free(result);
    return (str);
}
#include <stdio.h>

int main()
{
    char str[] = "Hello";
    printf("%s", ft_strrev(str));
    return (0);
}