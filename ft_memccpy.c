/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 22:53:47 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/08 23:07:12 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t			i;
	unsigned char	*psrc;
	unsigned char	*pdst;

	i = 0;
	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dest;
	while (i < size)
	{
		pdst[i] = psrc[i];
		if (psrc[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
