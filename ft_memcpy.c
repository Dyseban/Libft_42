/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 21:40:47 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/08 22:53:59 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
{
  char *d = dst;
  const char *s = src;
  while (n--)
    *d++ = *s++;
  return dst;
}
