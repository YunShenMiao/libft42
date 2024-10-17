/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:43:33 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/11 18:25:30 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t c)
{
	size_t	count;

	count = 0;
	if (c <= 0)
		return (0);
	while ((count < c && (unsigned char)str1[count] != '\0') || (count < c && (unsigned char)str2[count] != '\0'))
	{
		if ((unsigned char)str1[count] != (unsigned char)str2[count])
			return ((unsigned char)str1[count] - (unsigned char)str2[count]);
		count++;
	}
	return (0);
}

/* int	main(void)
{
	char str1[] = "Hallox";
	char str2[] = "HalloX";
	size_t c = 5;
	int x;

	x = ft_strncmp(str1, str2, c);
	printf("%d", x);
	return (0);
} */