/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:32:04 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/15 01:57:08 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t nbytes)
{
	size_t	destcount;
	size_t	count;

	destcount = 0;
	count = 0;
	while (dest[destcount] != '\0' && destcount < nbytes)
		destcount++;
	if (nbytes == 0 || destcount == nbytes)
		return (destcount + ft_strlen(src));
	else
	{
		while (destcount + 1 < nbytes && src[count] != '\0')
		{
			dest[destcount] = src[count];
			destcount++;
			count++;
		}
	}
	dest[nbytes -1] = '\0';
	return (destcount + (ft_strlen(src)));
}
/* 
int	main(void)
{
	char dest[7] = "Hi ";
	char src[] = "miaomiao";
	size_t nbytes = 6;
	int x;

	x = ft_strlcat(dest, src, nbytes);
	printf("%d", x);
	return(0);
} */