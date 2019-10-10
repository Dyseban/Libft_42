/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 23:17:47 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/09 21:46:20 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ps1;
	const unsigned char *ps2;
	size_t i;

	ps1 = (const unsigned char*)s1;
	ps2 = (const unsigned char*)s2;
	i = 0;

	while (i < n)
	{
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		else
			ps1++;
			ps2++;
	}
	return (0);
}
