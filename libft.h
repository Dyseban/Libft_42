/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:31:33 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/10 04:42:54 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int	ft_atoi(char *str);
void ft_bzero(void *s, size_t n);
void *calloc (size_t nelem, size_t elsize);
int ft_isalnum(int c);
int ft_isalpha(int c);
int	ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void		*ft_memccpy(void *dest, const void *src, int c, size_t size);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);;
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char	*ft_strdup(char *src);
char	*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dsize);
int	ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
int ft_tolower(int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
int ft_toupper(int c);
#endif
