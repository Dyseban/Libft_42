/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 05:05:09 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/12 08:25:34 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(const char *s, const char *set)
{
	size_t		size_s;
	char		*newstring;

	size_s = ft_strlen(s);
	while (*s && ft_strchr(set, *s))
		s++;
	while (size_s && ft_strchr(set, s[size_s]))
		size_s--;
	newstring = ft_substr((char*)s, 0, size_s + 1);
	return (newstring);
}

int main(int argc, char const *argv[])
{
	char s1[] = "lorem ipsum dolor sit amet";

	printf("%s\n", ft_strtrim(s1, "tel"));
}
