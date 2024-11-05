/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:35:30 by ryada             #+#    #+#             */
/*   Updated: 2024/09/25 11:44:03 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char *result;
    int len;
    int i;
    len = ft_strlen(src) + 1;
    result = (char *)malloc(sizeof(char) * len);
    if (!result)
        return (NULL);
    i = 0;
    while (i < len - 1)
    {
        result[i] = src[i];
        i++;
    }
    result[i] = '\0';
    return (result);
}