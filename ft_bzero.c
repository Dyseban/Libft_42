/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 21:25:07 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/10 01:38:49 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	c;
	unsigned char	*ptr;

	c = '\0';
	ptr = (unsigned char*)s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
}
