/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 00:09:56 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/09 00:15:12 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
	int c;

	c = '\0';
	unsigned char *ptr;
	*ptr = s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}

void *calloc (size_t nelem, size_t elsize)
{
	int *ptr;

  if (nelem == 0 || elsize == 0)
    nelem = elsize = 1;

  ptr = malloc (nelem * elsize);
  if (ptr) ft_bzero (ptr, nelem * elsize);

  return ptr;
}
