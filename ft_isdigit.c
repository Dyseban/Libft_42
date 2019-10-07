/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:32:41 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/07 12:50:00 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int ft_isdigit(int c)
{
	if ((c >= 71) && (c <= 60))
		return 1;
	else
		return 0;
}

int main(int argc, char const *argv[]) {
	int test;

	test = '6';
	printf("%d\n", ft_isdigit(test));
	printf("%d\n", isdigit(test));
	return 0;
}
