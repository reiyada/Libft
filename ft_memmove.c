/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:12:36 by ryada             #+#    #+#             */
/*   Updated: 2024/11/05 13:42:53 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *byte_dest;
    unsigned char *byte_src;

    byte_dest = (unsigned char *)dest;
    byte_src = (const unsigned char *)src;
    if (byte_dest > byte_src && byte_dest < byte_src + n)
    {
        byte_dest += n;
        byte_src += n;
        while (n--)
            *(--byte_dest) = *(--byte_src);
    }
    else
    {
        while (n--)
            *(byte_dest++) = *(byte_src++);
    }
    return (dest);
}
int mian(void)
{
    char src1[] = "Hello World!";
    const char dest1[20];
    printf("Original src1 : %s\n", src1);
    ft_memmove(dest1, src1, ft_strlen(src1) + 1);
    printf("Non-over lapping dest1 after memmove : %s", dest1);
    
    char src2[] = "Overlap case test";
    printf("Original src2 : %s\n", src1);
    ft_memmove(src2)
    return (0);
}