/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:55:40 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/13 10:48:58 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t nbytes)
{
	size_t		count;
	const char	*str1temp;
	const char	*str2temp;

	count = 0;
	str1temp = str1;
	str2temp = str2;
	if (nbytes <= 0)
		return (0);
	while (count < nbytes)
	{
		if ((unsigned char)str1temp[count] != (unsigned char)str2temp[count])
			return ((unsigned char)str1temp[count]
				- (unsigned char)str2temp[count]);
		count++;
	}
	return (0);
}

/* int	main(void)
{
	const char str1[] = "A";
	const char str2[] = "C";
	size_t nbytes = 1;
	int x;

	x = ft_memcmp(str1, str2, nbytes);
	printf("%d", x);
	return (0);
} */