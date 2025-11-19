/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:06:38 by omlouk            #+#    #+#             */
/*   Updated: 2025/11/19 07:26:07 by omlouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_toupper(int arg);
int				ft_tolower(int arg);
size_t			ft_strlen(const char *str);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
int				ft_isprint(int arg);
int				ft_isdigit(int arg);
int				ft_isascii(int arg);
int				ft_isalpha(char c);
int				ft_isalnum(int arg);
void			ft_bzero(void *s, size_t n);
char			*ft_strchr(const char *s, int c);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_atoi(char *str);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void            *ft_calloc(size_t nmemb, size_t size);
char            *strdup(const char *s);
void            *ft_memset(void *b, int c, size_t len)

#endif