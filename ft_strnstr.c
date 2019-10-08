/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:48:50 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/08 02:33:00 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int k;

	i = 0;
	while (str[i] || i == len)
	{
		k = 0;
		while (to_find[k])
		{
			if (str[i + k] != to_find[k])
				break ;
			k++;
			if (to_find[k] == '\0')
				return (&str[i]);
		}
		i++;
	}
	if (!(*to_find))
		return (str);
	else
		return (0);
}

int main(int argc, char const *argv[]) {
	const char str[] = "Je suis du text trouve moi";
	const char to_find[] = "suis";
	size_t num = 15;
	char *ptr;

	ptr = strnstr(str, to_find, num);
	printf("%s\n", ptr);
}
