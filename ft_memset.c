/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-floc <mle-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 02:46:12 by mle-floc          #+#    #+#             */
/*   Updated: 2019/10/08 22:36:49 by mle-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *b, int c, int len)
{
	unsigned char *ptr;
	*ptr = b;
	while (len > 0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (b);
}

int main(int argc, char const *argv[]) {
	char b[20];
	int c;
	int s;
		char final;
	char final2;

	c = 78;
	s = 20;

	printf("BEFORE : %c\n", final);
	printf("---------------------\n");
	printf("BEFORE : %c\n", final2);
	printf("---------------------\n");

	final = memset(b, c, s);
	final2 = ft_memset(b, c, s);

	printf("AFTER : %c\n", final);
	printf("---------------------\n");
	printf("AFTER : %c\n", final2);
	return 0;
}
