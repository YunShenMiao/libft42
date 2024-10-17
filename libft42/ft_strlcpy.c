/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:15:49 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/11 17:08:58 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t nbytes)
{
	size_t	count;
	size_t	srccount;

	srccount = 0;
	count = 0;
	while (src[srccount] != '\0')
		srccount++;
	if (nbytes == 0 || dest == 0)
		return (srccount);
	else
	{
		while (count < nbytes - 1 && src[count] != '\0')
		{
			dest[count] = src[count];
			count++;
		}
	}
	dest[count] = '\0';
	return (srccount);
}

/* {
	unsigned int	count;
	size_t			srccount;
	size_t			destcount;

	srccount = 0;
	count = 0;
	destcount = 0;
	while (src[srccount] != '\0')
		srccount++;
	while (dest[destcount] != '\0')
		destcount++;
	if (nbytes == 0)
		return (srccount);
	if (destcount == 0)
		return (srccount);
	else if (srccount == 0)
		dest[0] = '\0';
	else
	{
		while (count < nbytes - 1&& count < destcount - 1)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (srccount);
} */

/* int	main(void)
{
	char dest[] = "hallo";
	char src[] = "";
	size_t nbytes = 10;
	unsigned int x;

	x = ft_strlcpy(dest, src, nbytes);
	printf("%d", x);
	return (0);
} */