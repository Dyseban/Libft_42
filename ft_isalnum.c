/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 01:47:16 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/08 01:49:30 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
	if (c >= 48 && c <= 122)
		return (1);
	return (0);
}

int main(int argc, char const *argv[]) {
	int tt = 123;

	printf("%d\n", isalnum(tt));
	printf("%d\n", ft_isalnum(tt));
	return 0;
}
