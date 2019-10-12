/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 07:13:20 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/11 00:43:23 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*tmp_src;
	size_t		tmp_size;

	tmp_src = src;
	tmp_size = dstsize;
	if (tmp_size != 0)
	{
		while (--tmp_size != 0)
		{
			if ((*dst++ = *src++) == '\0')
				break ;
		}
	}
	if (tmp_size == 0)
	{
		if (dstsize != 0)
			*dst = '\0';
		while (*src++)
			;
	}
	return (src - tmp_src - 1);
}
