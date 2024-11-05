/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryada <ryada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:02:15 by ryada             #+#    #+#             */
/*   Updated: 2024/11/05 16:00:50 by ryada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>

int ft_isprint(int c);
void ft_bzero(void *ptr, size_t num);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *ptr, int value, size_t num);
size_t ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif