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

int	ft_strlen(char const *stri)
{
	int	count;

	count = 0;
	while (stri[count] != '\0')
	{
		count++;
	}
	return (count);
}

//appends src to dest, with dest maximum size of nbytes. Returns length of intended string(dest + src), null-terminates dest.
size_t	ft_strlcat(char *dest, const char *src, size_t nbytes)
{
	size_t	destcount;
	size_t destcres;
	size_t	count;

	destcount = 0;
	count = 0;
	while (dest[destcount] != '\0' && destcount < nbytes)
		destcount++;
	destcres = destcount;
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
	dest[destcount] = '\0';
	printf("%s", dest);
	return (destcres + (ft_strlen(src)));
}

int	main(void)
{
	char dest[7] = "Hi ";
	char src[] = "miaomiao";
	size_t nbytes = 7;
	int x;

	x = ft_strlcat(dest, src, nbytes);
	printf("%d", x);
	return(0);
} 