/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 03:23:26 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/11 03:34:11 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*str;
	int				sign;
	int				len;

	sign = (n < 0 ? 1 : 0);
	str = NULL;
	len = ft_lenint(n);
	nbr = (n < 0 ? -n : n);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
